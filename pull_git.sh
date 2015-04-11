#!/bin/bash
#This script is used to automatically pull & update from github
#edit on 11/04/2015 By Xianjun Zheng

#travel through all the subfolder
#then judge it is a folder or not
#if it is a folder, then cd into the folder
#run git pull command
#don't forget exit the subfolder
for folder in $(ls)
do
	
	if [ -d $folder ];then
	cd $folder
	echo $folder
	git pull origin
	cd ..
	fi
done
