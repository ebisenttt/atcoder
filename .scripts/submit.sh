#!/bin/zsh

if [ $# -eq 0 ]; then
  echo "Choose a file to submit"
elif [ $# -eq 1 ]; then
  if [ -d $1 ]; then
    contest=$(basename "$(pwd)")
    cd ./$1
    acc submit main.cpp -- -y --no-open
  else
    echo $1 "doesn't exist"
  fi
elif [ $# -gt 1 ]; then
  echo "You can submit one file at once"
fi

echo -e "\e[32mSubmission finished\e[m"