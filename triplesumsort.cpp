#include <bits/stdc++.h>
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
  sort(a,a+size);
  for(int i=0;i<size;i++)
  {
    int x=a[i];
    int l=i+1;
    int n=size-1;
    while(l<n)
    {
      if((x+a[l]+a[n])==num)
      {
        ct++;
        l++;
        n--;
      }
      else if((x+a[l]+a[n])<num)
      l++;
      else
      n--;
    }

      }

  cout<<ct<<"ct";
  return 0;
}
