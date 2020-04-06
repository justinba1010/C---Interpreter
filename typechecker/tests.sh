#! /bin/bash

for i in test/*; do
  echo "Testing file: $i"
  echo "-----------"
  (command -v pygmentize > /dev/null 2>&1 && pygmentize -g -O style=colorful,linenos=1 $i) || cat $i
  echo
  echo
  ./TypeChecker $i
  echo
  echo
  echo
done


