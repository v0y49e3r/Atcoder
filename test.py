
from main import get_submisssion_data,collection_newest_accepted_submissions


submissions = [
        {
            "id": 1001,
            "result": "AC",
            "problem_id": "A1",
            "contest_id": "abc001",
            "language": "C++",
            "user_id": "johnweed"
        },
        {
            "id": 1002,
            "result": "WA",
            "problem_id": "A1",
            "contest_id": "abc001",
            "language": "Python",
            "user_id": "johnweed"
        },
        {
            "id": 1003,
            "result": "AC",
            "problem_id": "A2",
            "contest_id": "abc001",
            "language": "C++",
            "user_id": "johnweed"
        },
        {
            "id": 1004,
            "result": "AC",
            "problem_id": "B1",
            "contest_id": "abc002",
            "language": "Python",
            "user_id": "johnweed"
        },
        {
            "id": 1005,
            "result": "AC",
            "problem_id": "A1",
            "contest_id": "abc001",
            "language": "Python",
            "user_id": "johnweed"
        }
    ]
a=collection_newest_accepted_submissions(submissions)
for contest_id,submission in a.items():
    print(contest_id)
    for sub in submission:
        submission_id = sub["id"]
print(a)





