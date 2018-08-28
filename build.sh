#!/bin/bash

#build CharSet
cd CharSet
gcc -o CharSet.o -c CharSet.c -std=c11
mv CharSet.o ..
cd ..
clear

#build main
gcc -o main.exe main.c -std=c11
clear


#run
./main.exe
read -p ""

#cleanup
rm -f CharSet.o
rm -f main.exe
clear
