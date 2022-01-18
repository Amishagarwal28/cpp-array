#include<iostream>
using namespace std;
int duplicate(int arr[50],int size)
{
  for(int i=0;i<size;i++)
  {
    for(int j=0;j<size;j++)
    {
      if(i!=j)
      {
        if(arr[i]==arr[j])
          return arr[i];
      }
    }
  }
}
int main()
{
  cout<<"enter t"<<endl;
  int t;
  cin>>t;
  for(int i=0;i<t;i++)
  {
    cout<<"enter size and array";
    int size,arr[50];
    cin>>size;
    for(int j=0;j<size;j++)
    cin>>arr[j];
    int n=duplicate(arr,size);
    cout<<"n"<<n;
return 0;
  }
}
