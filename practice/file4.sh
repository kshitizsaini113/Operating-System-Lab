#bin/bash

#Passing arguments

echo $0 $1 $2 $3

args=("$@")

echo ${args[0]} ${args[1]} ${args[2]} ${args[3]}
