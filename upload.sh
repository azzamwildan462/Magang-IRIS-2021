#Eksperimen linux shell

git add "$1"
git commit -m "$2"
git push origin main
echo " "
echo " "
echo -n "Upload pada: "; date
echo -n "Upload oleh: "; whoami
echo "Objek -> $1"
echo "Commit -> $2"
echo "Cabang -> main"