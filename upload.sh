#Eksperimen linux shell
link="https://github.com/azzamwildan462/Magang-IRIS-2021"
git add "$1"
git commit -m "$2"
git push origin main
echo " "
echo " "
echo -n "Upload '$1' dengan commit '$2' pada: "; date
echo "Link -> $link"