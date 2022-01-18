#include<iostream>
using namespace std;
int main()
{
  int size,a[50],num,ct=0;
  cout<<" enter size"<<endl;
  cin>>size;
  cout<<"enter array";
  for(int i=0;i<size;i++)
  cin>>a[i];
  cout<<"enter num";
  cin>>num;
  for(int i=0;i<size;i++)
  {
    for(int j=i+1;j<size;j++)
    {
      for(int k=j+1;k<size;k++){
      if((a[i]+a[j]+a[k])==num)
      {
        ct++;

      }
    }
    }
  }
  cout<<ct<<"ct";
  return 0;
}
