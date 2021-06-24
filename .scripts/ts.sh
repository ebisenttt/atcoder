#!/bin/zsh

if [ $# -ne 1 ]; then
  echo "Choose one task to test"
else
  g++ --std=c++17 ./$1/main.cpp -o ./$1/main
  oj test -c ./$1/main -d ./$1/test/
fi