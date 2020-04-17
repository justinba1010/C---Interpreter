#! /bin/bash

for i in test/*; do
  echo "Testing file: $i"
  echo "-----------"
  (command -v pygmentize > /dev/null 2>&1 && pygmentize -g -O style=colorful,linenos=1 $i) || cat $i
  echo
  echo
  ./TypeCheck $i
  echo
  echo
  echo
  if [[ $1 == "auto" ]]
  then
    sleep 5s
  else
    read -p "Enter to continue"
  fi
done


