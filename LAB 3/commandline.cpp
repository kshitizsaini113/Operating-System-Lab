#include <iostream>
#include <string>
#include <string.h>

using namespace std;

int main(int argc,char** argv)
{
  int choice;
  char temp;

  cout<<"You have entered "<<argc<<" arguments..."<<endl<<endl<<endl;

  cout<<"1. All Arguments"<<endl;
  cout<<"2. Odd Arguments"<<endl;
  cout<<"3. Even Arguments"<<endl;
  cout<<"4. Reverse Arguments"<<endl;
  cout<<"5. Arguments in reverse"<<endl;

  cout<<endl<<"Enter your choice : ";
  cin>>choice;

  switch(choice)
  {
    case 1:
      cout<<"CASE 1"<<endl<<endl;

      for(int i=0;i<argc;i++)
      {
        cout<<argv[i]<<", ";
      }
      cout<<endl<<endl<<endl;
    break;

    case 2:
      cout<<"CASE 2"<<endl<<endl;

      for(int i=0;i<argc;i++)
      {
        if(i%2!=0)
        {
          cout<<argv[i]<<", ";
        }
      }
      cout<<endl<<endl<<endl;
    break;

    case 3:
      cout<<"CASE 3"<<endl<<endl;

      for(int i=0;i<argc;i++)
      {
        if(i%2==0)
        {
          cout<<argv[i]<<", ";
        }
      }
      cout<<endl<<endl<<endl;
    break;

    case 4:
      cout<<"CASE 4"<<endl<<endl;

      for(int i=argc;i>0;i--)
      {
        cout<<argv[i-1]<<", ";
      }
      cout<<endl<<endl<<endl;
    break;

    case 5:
      cout<<"CASE 5"<<endl<<endl;

      for(int i=0;i<argc;i++)
      {
        char *s=argv[i];
        char *rev;

        int a,len,b;

        for(a=0;s[a]!=' ';a++)
        {
          cout<<s[a];
        }
        cout<<len<<endl;
        /*for(b=len;b>0;b--)
        {
            cout<<s[b];
        }*/
      }
      cout<<endl<<endl<<endl;
    break;

  }
  return 0;
}
