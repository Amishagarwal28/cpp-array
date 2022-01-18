#include<iostream>
using namespace std;
int unique(int arr[50],int size)
{
  int flag;
  for(int i=0;i<size;i++)
  {flag=0;
    for(int j=0;j<size;j++)
    {
      if(i!=j)
      {
        if(arr[i]==arr[j])
          flag++;
      }
    }
    if(flag==0)
    return arr[i];
  }
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
return 0;
  }
}
