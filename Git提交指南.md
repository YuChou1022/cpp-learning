# 在 Visual Studio 中 commit 和上传 GitHub

本地仓库：D:\C++项目
远程仓库：https://github.com/YuChou1022/cpp-learning
分支：main

## 四个动作的区别

- 保存（Ctrl+Shift+S）：把编辑器里的修改写到磁盘。
- 暂存（git add）：选出这次要提交的文件。
- 提交（git commit）：在本机生成一条有说明的版本记录，还没有上传。
- 推送（git push）：把本机的提交上传到 GitHub。

## 在紫色 Visual Studio 中操作

1. 修改代码后，按 Ctrl+Shift+S 保存所有文件。
2. 打开“视图 → Git 更改”（View → Git Changes）。
3. 确认当前仓库是 D:\C++项目，分支是 main；若没识别，使用 Git → 本地存储库 → 打开本地存储库，选择该目录。不同语言版本的菜单名称可能略有差异。
4. 查看“更改”列表，双击文件检查本次差异。
5. 想提交全部修改，就输入提交说明并点“全部提交”（Commit All）。想只提交部分文件，就先用文件旁边的 + 暂存，再提交暂存内容。
6. 点击“推送”（Push，向上箭头），把提交上传到 GitHub。
7. 刷新 GitHub 仓库，确认最新提交说明和文件内容已更新。

提交说明写清“改了什么”，例如：

- 添加静态成员函数练习
- 修复通讯录删除联系人后的计数
- 补充深拷贝与浅拷贝的注释

## PowerShell 中的同等操作

进入仓库：

```powershell
cd 'D:\C++项目'
git status
git diff
```

选择文件并提交（将路径换成你这次修改的真实文件）：

```powershell
git add -- '内存四区/new操作符.cpp'
git diff --cached
git commit -m '完善 new 操作符练习'
git push
git status
```

如果这次所有修改都属于同一项练习，检查后可使用 git add . 暂存全部。

## 第一次自己练习

1. 在刚学的一个 .cpp 中写一行自己的学习注释，保存。
2. 在 Git 更改中检查差异，确认只改了预期内容。
3. 提交说明填写“补充某知识点的学习注释”，点击提交。
4. 点击推送，再去 GitHub 对照这条提交。

## 常见提示

- nothing to commit, working tree clean：没有新的已保存修改要提交，不是报错。
- 文件没有出现在更改里：确认已经保存、位于当前仓库内，并且没有被 .gitignore 忽略。
- commit 成功但 GitHub 没变：还需要 push。
- push 被拒绝或提示远程有新提交：先查看原因；可用 VS 的拉取操作同步，并处理可能出现的冲突。不要使用强制推送覆盖远程历史。
- 推送要求登录：使用你已有的 GitHub 账号完成登录；不要把密码或令牌写进代码或提交说明。

## 官方说明

https://learn.microsoft.com/en-us/visualstudio/version-control/git-make-commit
