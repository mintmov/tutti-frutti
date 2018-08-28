#!/bin/bash


#build CharSet
cd CharSet
gcc -o CharSet.o -c CharSet.c -std=c11
mv CharSet.o ..
cd ..


#build main
gcc -o main.exe CharSet.o main.c -std=c11


#run
./main.exe
read -p ""


#cleanup
rm -f CharSet.o
rm -f main.exe
clear
