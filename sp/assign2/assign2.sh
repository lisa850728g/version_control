#!/bin/bash

cat 1.txt 2.txt 3.txt | tr '[:upper:]' '[:lower:]' | tr '[:punct:]' ' '| tr -d '[:digit:]' |\
    tr ' &&\r' '\n' | tr -s '\n' | sort | uniq -c | sort -n |\
     awk -v var1="$1" -v var2="$2" '$1 > var1 && $1 < var2 {print $0}'
