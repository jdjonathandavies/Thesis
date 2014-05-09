#!/bin/bash


DIR=~/Desktop/NewThesis/
cd $DIR

DAY=`date +%d`
MONTH=`date +%m`
YEAR=`date +%y`

find ./ -name "*.pdf" -o -name "*.eps" -o -name "*.jpg"  | tar --exclude='./resources/' --exclude='./otherPeoplesThesis/' --exclude=*.tar.gz -cvzf thesisPlotsBackup${YEAR}-${MONTH}-${DAY}.tar.gz -T -