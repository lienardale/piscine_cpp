git rm `git status | grep deleted | awk '{print $2}'`
git add .
git commit -m \"$1\"
git push
