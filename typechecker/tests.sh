#! /bin/bash

for i in test/*; do
  echo "Testing file: $i"
  echo "-----------"
  cat $i
  echo
  echo
  ./TypeChecker $i
  echo
  echo
  echo
done


