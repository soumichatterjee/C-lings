#!/usr/bin/env bash

echo "Let's get you set up with C-Lings!"

echo "Checking requirements..."
flag=-1
if [ -x "$(command -v gcc)" ]
then
    echo "GCC is installed.."
    flag=0
    
elif [ -x "$(commnad -v clang)" ]
then 
    echo "Clang is installed"
    flag =1
else
    echo "Install GCC or Clang"
    exit
fi
echo "Cloning into C-Lings.."

git clone https://github.com/Chatterjee-31/C-lings.git

if [ "$flag" -eq 0 ]
then
    cd C-lings | gcc compile.c -o compile
else
    cd C-lings | clang compile.c -o compile
fi
rm compile.c
rm instal.sh
echo "All done! Time to explore C-lings"