#! /bin/bash

for i in test/*; do
  echo "Testing file: $i"
  echo "-----------"
  ([[ $2 == "ccat" ]] && command -v pygmentize > /dev/null 2>&1 && pygmentize -g -O style=colorful,linenos=1 $i) || cat $i
  echo
  echo
  ./TypeChecker $i
  echo
  echo
  echo
  if [[ $1 == "auto" ]]
  then
    sleep 0s
  else
    read -p "Enter to continue"
  fi
done

for i in lab2-testsuite/good/*.cc; do
  echo "Testing file: $i"
  echo "-----------"
  ([[ $2 == "ccat" ]] && command -v pygmentize > /dev/null 2>&1 && pygmentize -g -O style=colorful,linenos=1 $i) || cat $i
  echo
  echo
  ./TypeChecker $i
  exitcode=$?
  if [[ $? == "0" ]]
  then
    echo "Success"
  else
    echo "Failure"
  fi
  echo
  echo
  echo
  if [[ $1 == "auto" ]]
  then
    sleep 0s
  else
    read -p "Enter to continue"
  fi
done
for i in lab2-testsuite/bad/*.cc; do
  echo "Testing file: $i"
  echo "-----------"
  ([[ $2 == "ccat" ]] && command -v pygmentize > /dev/null 2>&1 && pygmentize -g -O style=colorful,linenos=1 $i) || cat $i
  echo
  echo
  ./TypeChecker $i
  exitcode=$?
  if [[ $? == "1" ]]
  then
    echo "Success"
  else
    echo "Failure"
  fi
  echo
  echo
  echo
  if [[ $1 == "auto" ]]
  then
    sleep 0s
  else
    read -p "Enter to continue"
  fi
done
