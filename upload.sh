#!/usr/bin/expect
spawn git branch tmp
spawn git checkout tmp
spawn git add . --all
#echo "please input commit message:"
#read message
#temp_date=$(date)
#temp_date=`date`
spawn git commit -m "add books"
#spawn git commit -m "add books on $temp_date"
spawn git checkout master
spawn git merge tmp
spawn git push origin master
#spawn git push origin master
expect "*https://github.com*"
send "wolffzheng\r"
expect "*wolffzheng@github.com*"
send "Wolff8341\r"
expect eof
spawn git branch -d tmp

