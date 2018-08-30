#!/bin/bash


#build Charset
cd Charset
gcc -o Charset.o -c Charset.c -std=c11
mv Charset.o ..
cd ..


#build main
gcc -o main.exe Charset.o main.c -std=c11


#run
./main.exe
read -p ""


#cleanup
rm -f Charset.o
rm -f main.exe
clear
