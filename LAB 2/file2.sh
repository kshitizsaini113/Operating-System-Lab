#bin/bash

echo "Enter number 1 : "
read num1
echo "Enter number 2 : "
read num2

num=0
i=1

while [ $i -le $num2 ]
do
  num=`expr $num + $num1`
  i=`expr $i + 1`
done

echo "Multiplication is : " $num
