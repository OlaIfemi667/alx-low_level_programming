#!/bin/bash
for fichier in *.c
do
	 gcc -c "$fichier" -o "${fichier%.c}.o"
 done
 ar rcs liball.a *.o
