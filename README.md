AtCoderからGitHubにソースコードを自動でアップロードするスクリプトの使い方
1. 概要

このスクリプトは、AtCoderからコードを自動的にダウンロードし、GitHubにアップロードするツールです。手動でスクリプトを実行することも、自動で実行するようにcronjobを設定することもできます。
2. 環境設定
2.1. Pythonのインストール

まず、Pythonがインストールされているか確認します。次のコマンドを実行して確認してください：

python3 --version

もしインストールされていなければ、以下のコマンドでインストールします：

sudo apt update && sudo apt install python3

2.2. 必要なライブラリのインストール

次に、必要なPythonライブラリをインストールします。以下のコマンドを実行してください：

pip install requests beautifulsoup4 gitpython

3. GitHub Tokenの安全な設定

コード内に直接トークンを記載するのではなく、環境変数として設定することをお勧めします。

export GITHUB_TOKEN="your_token_here"

Pythonスクリプト内では、次のようにしてトークンを取得します：

import os
github_token = os.getenv("GITHUB_TOKEN")

4. スクリプトの手動実行

AtCoderからコードをダウンロードし、GitHubにアップロードしたいときは、以下のコマンドでスクリプトを実行します：

python3 your_script.py

5. cronjobを使って自動実行を設定

cronjobを使用して、スクリプトを定期的に自動実行することができます。
5.1. Cronjobの編集

まず、以下のコマンドでcronjobの設定を編集します：

crontab -e

5.2. スクリプトの実行スケジュールを追加

次の行をファイルの最後に追加して、30分ごとにスクリプトが実行されるようにします：

*/30 * * * * /usr/bin/python3 /home/v0y493r/atCoderSubmission/your_script.py >> /home/v0y493r/atCoderSubmission/log.txt 2>&1

もし毎日12時に実行したい場合は、次のように書き換えます：

0 12 * * * /usr/bin/python3 /home/v0y493r/atCoderSubmission/your_script.py >> /home/v0y493r/atCoderSubmission/log.txt 2>&1

5.3. cronjobが保存されたか確認

設定が保存されたか確認するには、以下のコマンドを実行します：

crontab -l

表示されたcronjobの内容を確認し、正しく保存されていれば問題ありません。
6. デバッグとエラーチェック

スクリプトが正しく動作しない場合：

    ログファイルを確認します：cat /home/v0y493r/atCoderSubmission/log.txt

    環境変数が正しく設定されているか確認します：echo $GITHUB_TOKEN

    手動でスクリプトを実行してエラーメッセージを確認します。
