#!/bin/bash


DIR=~/Desktop/NewThesis/
cd $DIR

DAY=`date +%d`
MONTH=`date +%m`
YEAR=`date +%y`

if [ -e thesisBackup${YEAR}-${MONTH}-${DAY}.tar.gz ]
then
    for (( backup=1 ; backup < 10; backup++ ))
    do
	if [ -e thesisBackup${YEAR}-${MONTH}-${DAY}.${backup}.tar.gz ]
	then
	    continue;
	else
	    tar --exclude='./resources/' --exclude='./otherPeoplesThesis/' --exclude=*.tar.gz -cvzf thesisBackup${YEAR}-${MONTH}-${DAY}.${backup}.tar.gz ./*
	    echo "thesisBackup${YEAR}-${MONTH}-${DAY}.${backup}.tar.gz"
	    break;
	fi
    done
else
    tar --exclude='./resources/' --exclude='./otherPeoplesThesis/' --exclude=*.tar.gz -cvzf thesisBackup${YEAR}-${MONTH}-${DAY}.tar.gz ./*
    echo "thesisBackup${YEAR}-${MONTH}-${DAY}.tar.gz"
fi