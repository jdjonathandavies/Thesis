#!/bin/bash


DIR=~/Desktop/NewThesis/
cd $DIR

DAY=`date +%d`
MONTH=`date +%m`
YEAR=`date +%y`

tar --exclude='./resources/' --exclude='./otherPeoplesThesis/' --exclude=*.tar.gz -cvzf thesisBackup${YEAR}-${MONTH}-${DAY}.tar.gz ./*