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
	    BACKUP_NAME=thesisBackup${YEAR}-${MONTH}-${DAY}.${backup}.tar.gz
	    tar --exclude='./resources/' --exclude='./otherPeoplesThesis/' --exclude=*.tar.gz -cvzf $BACKUP_NAME ./*

	    echo "====================================="
	    echo "Made $BACKUP_NAME"
	    echo "Copying to UCL"
	    scp $BACKUP_NAME plus1:~/
	    echo "====================================="

	    break;
	fi
    done
else
    BACKUP_NAME=thesisBackup${YEAR}-${MONTH}-${DAY}.tar.gz
    tar --exclude='./resources/' --exclude='./otherPeoplesThesis/' --exclude=*.tar.gz -cvzf $BACKUP_NAME ./*

    echo "====================================="
    echo "Made $BACKUP_NAME"
    echo "Copying to UCL"
    scp $BACKUP_NAME plus1:~/
    echo "====================================="
fi