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
  int temp[num];
  for(int i=0;i<num;i++)
  temp[i]=a[i];
  for(int i=0;i<size-num;i++)
  a[i]=a[i+num];
  for(int i=0;i<num;i++)
  a[size-num+i]=temp[i];
  for(int i=0;i<size;i++)
  cout<<a[i];
  return 0;
}

// //another way
//
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//   int size,a[50],num,ct=0;
//   cout<<" enter size"<<endl;
//   cin>>size;
//   cout<<"enter array";
//   for(int i=0;i<size;i++)
//   cin>>a[i];
//   cout<<"enter num";
//   cin>>num;
//   int temp,i,j;
//   for(i=0;i<num;i++)
//   {
//     temp=a[0];
//     for(j=0;j<size-1;j++)
//     a[j]=a[j+1];
//     a[j]=temp;
//   }
//   for(int i=0;i<size;i++)
//   cout<<a[i];
//   return 0;
// }
