# git使用方法

拉取文件：

 git push -u -f origin main

查看本地仓库文件状态：

git status

增加或者修改文件或目录：

git add note/basic/

提交本地修改至仓库：

git commit

提交修改至github

 git push -u -f origin main

运行一下命令缓存输入的用户名和密码：
git config --global credential.helper wincred

如果报错OpenSSL SSL_read: Connection was reset, errno 10054
可使用解除SSL认证
git config --global http.sslVerify "false"

新建一个分支 可使用
git checkout -b [branchname]
 git push -u -f origin [branchname]
