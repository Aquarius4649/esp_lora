## インストールからRUNまで

serial port と　デバイスの設定。

pythonのパスを追加してpythonに対してpython3 シンボリックリンクを作成

```
 echo 'export PATH="/path/to/your/python:$PATH"' >> ~/.bashrc
 source ~/.bashrc
 sudo ln -s $(which python3) /usr/local/bin/python
```

ここで、"/path/to/your/python"はPython実行ファイルのパスに置き換えてください。

## test

スケッチ変更からファイルを指定してrun