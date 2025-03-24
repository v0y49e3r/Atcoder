# you can take atcoder api at here 
#https://github.com/kenkoooo/AtCoderProblems/blob/master/doc/api.md
from time import sleep
import requests
import json
import html
import git
import datetime
import os
from bs4 import BeautifulSoup

# api
api_path = "https://kenkoooo.com/atcoder/atcoder-api/v3/user/submissions?user={user_id}&from_second={unix_second}"

#userid and timestamp
# lay thong tin code tu thoi gian nao thi su dung from_second
userId = "v0y493r"
from_second = 0

def get_submisssion_data(userId,from_second):

    # khi lay 1 cai subm thi gia tri tra ve se la 1 jsondata 
    #https://kenkoooo.com/atcoder/atcoder-api/v3/from/1505342145

    api_url = api_path.format(user_id = userId,unix_second=from_second)
    response = requests.get(api_url)

    if response.status_code != 200:
        print(f"Error fetching submissions data for user {userId}")
        return []

    try:
        print("dang lay data")
        jsonData = response.json()
        if not jsonData:
            print("No submissions found for user{userId}")
    except ValueError as e:
        print("Json Error: ",e)
        return []
    print(jsonData)

    return jsonData


# get "AC"submissions

def sort_submissions_by_id(submissions):
    sortedData = sorted(submissions,key=lambda x : x["id"])
    return sortedData

def collection_newest_accepted_submissions(submissions):
    sortedData = sort_submissions_by_id(submissions)

    submits = {} # luu cac submission moi nhat cho tung problem 

    for data in sortedData:
        if data["result"] != "AC": # chi lay ket qua AC
            continue
        #data la 1 json data
        problem_id = data["problem_id"]

        if problem_id not in submits or submits[problem_id]["id"] < data["id"]:
            submits[problem_id] = data
    result ={}
        # tao 1 dictionary result chua cac lan nop bai
        # cau truc cua result se la  result ={"contest_1 " :[
        # {lan nop 1},
        # { lan nop 2}]
        #}
    for sub in submits.values():
            contest_id = sub["contest_id"]
            if contest_id not in result:
                result[contest_id] = []
            result[contest_id].append(sub)
    return result

def get_submission_code(submission_id,contest_id):
    """
    lay code tu submission thong qua Id va contest_id
    tra ve code neu success and return none if nothing
    """
    sub_url = f"https://atcoder.jp/contests/{contest_id}/submissions/{submission_id}"
    response = requests.get(sub_url)

    if response.status_code != 200:
        print(f"Error fetching submission code for ID {submission_id}: {response.status_code}")
        return None

    """
    su dung beutifulSoup de lay thong ma code tu tren mang ve

    """
    soup = BeautifulSoup(response.text,"html.parser")
    code_element = soup.find("pre",id="submission-code")

    if code_element:
        code_text = html.unescape(code_element.get_text())
        return code_text
    else:
        print(f"Code not found in submission ID {submission_id}. Page content:\n{soup.prettify()}")
        return None

def save_submission_code(newestSubmission):
    """ 
        luu ma nguon cac submission vao direc submissions
    """
    root = "submissions/"
    add_count = 0
    for contest_id,submission in newestSubmission.items():
        for sub in submission:
            submission_id = sub["id"]
            code = get_submission_code(submission_id,contest_id)

            if code is None:
                continue
            # lay ma so cua problem ()
            problem_num = sub["problem_id"][-1]
            if problem_num.isdigit():
                alphabet = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z']
                problem_num = alphabet[int(problem_num) -1]

            path = os.path.join(root,contest_id,problem_num)
            if "C++" in sub["language"]:
                path +=".cpp"
            elif "Python" in sub["language"]:
                path += ".py"
            
            if os.path.isfile(path):
                print(f"File {path} already exists.Skipping")
                continue
            # neu nhu chua co file trong cai path thi can tao 1 child directory (nen ta dung makedirs)
            os.makedirs(os.path.dirname(path),exist_ok=True)
            with open(path,"w") as file:
                file.write(code)
            add_count +=1
            sleep(3)
    return add_count


def push_to_github():
    submissions = get_submisssion_data(userId,from_second)
    newestSubmission = collection_newest_accepted_submissions(submissions)
    add_count = save_submission_code(newestSubmission)
    repo_path = "home/v0y493r/atCoderSubmission"
    if add_count > 0:
        print(f"Finished process, added(add_count) files")
        date_time_now = datetime.datetime.now()
        #time updated code
        commit_message = f"Update submission :{date_time_now.strftime('%Y-%m-%d %H:%M:%S')}"
        try:
            #make path
            repo = git.Repo(repo_path)
            github_token = "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"         
            origin_url =  "https://github.com/v0y49e3r/Atcoder.git"
            
            # make good
            repo.git.add("submission/*")
            repo.git.commit(commit_message)
            repo.git.push("origin","main")
            print("Successfully pushed to Github.")
        except Exception as e:
            print(f"Error: {e}")
    else:
        print("No submission added to github")

def main():
    #lay data tu submission api
    submissions = get_submisssion_data(userId,from_second)
    newestSubmission = collection_newest_accepted_submissions(submissions)
    save_submission_code(newestSubmission)
    push_to_github()




if __name__ == "__main__":
    main()
