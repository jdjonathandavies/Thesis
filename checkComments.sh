#!/bin/bash

#This is a stupid script to print out all the comments

COMMENTS_FILE=comments.txt

LINENUM=0

echo "Reading in the comment types"

while read line
do
    if [ -z "$line" ]
    then
	continue;
    fi

    for word in $line
    do
	COMMENT[$LINENUM]="$word"
	break;
    done
    
    echo "${COMMENT[$LINENUM]}"
    LINENUM=$(( LINENUM + 1))
    

done < $COMMENTS_FILE

NUM_COMMENT_TYPES=$((LINENUM ))


echo "Now lets get a list of files"

FILE_LIST=`find . -maxdepth 3 -iname "*.tex"`

#echo $FILE_LIST

NUM_COMMENTS=0


for file in $FILE_LIST
do
    if [[ $file == ./.tex ]] 
    then
	continue
    fi


    for (( COMMENT_TYPE=0; COMMENT_TYPE < $NUM_COMMENT_TYPES ; COMMENT_TYPE++ ))
    do
	OUTPUT=`grep  ${COMMENT[$COMMENT_TYPE]} $file`
	if [ ! -z "$OUTPUT" ]
	then
	    echo $file
	    echo $OUTPUT
	fi
    done



done
