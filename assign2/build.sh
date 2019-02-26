#!/bin/sh
g++ *.cpp

# check if the compile was succesful
if [ $? != 0 ]
then
    # show error if unsuccessful
    echo "compilation failed. please read error messages"
    exit 1
fi

# run program if successful
./a.out

