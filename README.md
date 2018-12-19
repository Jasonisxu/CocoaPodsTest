# JasonCocoaPodsTest

终端cd到本地仓库文件夹下, 将整个本地库调用git命令, 全部push到远程私有仓库中, 并打上与LTCategorys.podspec文件相同的tag
git add .
git commit -m '备注'
git push origin master
git tag 0.2.0
git push --tags

