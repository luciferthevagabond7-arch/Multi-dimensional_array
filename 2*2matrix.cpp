#include<iostream>
using namespace std;
int main()
{
  int i,j,arr[2][2];
  cout<<"Multidimensional array\n"<<endl;
  for(i=0;i<2;i++)
  {
    for(j=0;j<2;j++)
    {
      cout<<"Enter a ["<<i<<"]"<<"["<<j<<"]:";
      cin>>arr[i][j];
    }
  }
  for(i=0;i<2;i++)
  {
    cout<<"\n";
    for(j=0;j<2;j++)
    {
      cout<<"\t"<<arr[i][j];
    }
  }
  return 0;
}
