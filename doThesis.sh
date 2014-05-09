#!/bin/bash


for file in ./*.mf
do
#    echo $file
    substr=${file%.mf}
    echo $substr

    if ls $substr*gf &> /dev/null
    then
	echo "Got $substr gf file already"
    else
	mf "\mode=localfont; input $substr"
    fi
done

make

