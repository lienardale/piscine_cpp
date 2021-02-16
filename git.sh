
COMMIT=$1
git add -u .
git add .
git commit -m "$COMMIT"
git push
