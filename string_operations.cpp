#include<iostream>
#include<string.h>
using namespace std;
int main()
{
  char str1[10]="C++";
  char str2[20]="_Programming";
  char str3[10];

  strcpy(str3,str1);
  cout<<"copy:"<<str3<<endl;

  strcmp(str1,str2);
  cout<<"compare:"<<strcmp<<endl;

  strcat(str1,str2);
  cout<<"concatenate:"<<str1<<endl;

  strlen(str2);
  cout<<"length:"<<strlen<<endl;
  
  strrev(str2);
  cout<<"reverse:"<<str2<<endl;

  return 0;
}
