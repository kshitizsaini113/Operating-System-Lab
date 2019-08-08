#bin/bash

echo "Enter two numbers"
read a
read b
#Takes user input

echo
echo "1. Addition"
echo "2. Subtraction"
echo "3. Multiplication"
echo "4. Division"
#Displays a menu

echo
echo "Enter your choice : "
read choice
#Asks for choice

case $choice in
  1)result=`expr $a + $b`
  ;;
  2)result=`expr $a - $b`
  ;;
  3)result=`expr $a \* $b`
  ;;
  1)result=`expr $a / $b`
  ;;
esac

echo
echo "Result is : $result"
