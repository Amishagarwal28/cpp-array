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
  int k=0;

  for(int i=0;i<size;i++)
  {
    if(a[i]<a[i+1])
    k++;
  }if(k==(size))
  cout<<0;
  cout<<k<<"k";
  return 0;
}
