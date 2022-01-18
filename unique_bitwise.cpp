#include<iostream>
using namespace std;
int unique(int arr[50],int size)
{ int b=0;
  for(int i=0;i<size;i++)
  {
    b=b^arr[i];
  }
  return b;
}
int main()
{
  cout<<"enter t"<<endl;
  int t;
  cin>>t;
  for(int i=0;i<t;i++)
  {
    cout<<"enter size ";
    int size,arr[50];
    cin>>size;
    for(int j=0;j<size;j++)
    cin>>arr[j];
    int n=unique(arr,size);
    cout<<n;
  }
  return 0;
}
