#bin/bash

count=5

if [ $count -eq 5 ]
then
  echo "Condition is true"
fi


if (( $count <= 5 ))
then
  echo "Condition is true"
fi

word='a'

if [[ $word > "b" ]]
then
  echo "Condition is true"
else
  echo "Condition is false"
fi
