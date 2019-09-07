#include <iostream>
#include <stdlib.h>

using namespace std;

int factorial(int n)
{
  if (n==0)
  {
    return 1;
  }
  return (n*factorial(n-1));
}

int main(int argc, char **argv)
{
  int val;
  int fact;
  val = atoi(argv[1]);
  if(val>=0)
  {
    fact=factorial(val);
    cout<<"Factorial of "<<val<<" is : "<<fact<<endl;
  }
  else
  {
    cout<<"Factorial of negative number is not possible"<<endl;
  }
  return 0;
}
