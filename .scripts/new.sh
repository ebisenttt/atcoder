#!/bin/zsh

cd $ATCODER

echo "contest url? >"
read url

#separate contest url
short_url=${url/https:\/\//}
arr_url=(`echo $short_url | tr '/' ' '`)

#get contest and task name
last_url=$arr_url[5]

arr_last=(`echo $last_url | tr '_' ' '`)
contest=$arr_last[1]
task=$arr_last[2]

#get problem name
if [[ "$task" =~ ^[0-9]+$ ]] then;
  case "$task" in
    "1")
      problem="a";;
    "2")
      problem="b";;
    "3")
      problem="c";;
    "4")
      problem="d";;
    "5")
      problem="e";;
    "6")
      problem="f";;
    *)
      echo "undefined";;
  esac
else
  problem=$task
fi

#add a problem directory or a contest directory
if [ -d $contest ]; then
  echo $contest "exists"
else
  echo $contest "doesn't exist"
fi

acc new --force $contest

#open a file on vscode
cd $ATCODER/$contest

code -g ./$problem/main.cpp:14:3
