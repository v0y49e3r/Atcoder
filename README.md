AtCoderからGitHubへ自動的にソースコードをアップロードするスクリプトの使い方
1. 概要

このスクリプトは、AtCoderからソースコードを自動的にダウンロードし、GitHubにアップロードします。手動でスクリプトを実行するか、cronjobを使用して自動実行することができます。
2. 環境設定
2.1. Pythonのインストール

Pythonがインストールされているか確認するには、次のコマンドを実行します:

python3 --version

インストールされていない場合、次のコマンドでインストールします:

sudo apt update && sudo apt install python3

2.2. 必要なライブラリのインストール

次のコマンドを実行して、必要なライブラリをインストールします:

pip install requests beautifulsoup4 gitpython

3. GitHubのアクセストークン設定

コードにトークンを直接保存するのではなく、環境変数を使うことをお勧めします:

export GITHUB_TOKEN="your_token_here"

スクリプト内で、次のようにトークンを取得します:

import os
github_token = os.getenv("GITHUB_TOKEN")

4. スクリプトの手動実行

AtCoderからソースコードをダウンロードしてGitHubにアップロードするためには、次のコマンドを実行します:

python3 your_script.py

5. 自動実行の設定 (cronjob)

cronjobを使用して、スクリプトを自動で実行するよう設定できます。
5.1. cronjobを開く

crontab -e

5.2. スクリプトを実行する時間を設定

例えば、30分ごとに実行する場合:

*/30 * * * * /usr/bin/python3 /home/v0y493r/atCoderSubmission/your_script.py >> /home/v0y493r/atCoderSubmission/log.txt 2>&1

または、毎日12時に実行する場合:

0 12 * * * /usr/bin/python3 /home/v0y493r/atCoderSubmission/your_script.py >> /home/v0y493r/atCoderSubmission/log.txt 2>&1

5.3. cronjobが設定されたか確認

crontab -l

このコマンドで、設定したcronjobが表示されれば、正常に設定されています。
6. デバッグとエラーチェック

もしスクリプトが正しく動作しない場合:

    ログファイルを確認: cat /home/v0y493r/atCoderSubmission/log.txt
    環境変数が正しく設定されているか確認: echo $GITHUB_TOKEN
    手動でスクリプトを実行してエラーメッセージを確認

7. 結論

設定が完了した後は、スクリプトが自動的にAtCoderからソースコードをダウンロードし、GitHubにアップロードします。手動で操作する必要はありません。
