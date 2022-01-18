#include<iostream>
using namespace std;
void merge(int arr[],int l,int mid,int h,int size )
{
  int k=l,i=l,j=mid+1;
  int temp[size];
  while(i<=mid&&j<=h)
  {
    if(arr[i]<=arr[j])
    temp[k++]=arr[i++];
    else
    temp[k++]=arr[j++];
  }
  while(i<=mid)
  {
    temp[k++]=arr[i++];
}
while(j<=h)
{
  temp[k++]=arr[j++];
}
for(int p=l;p<=h;p++ )
arr[p]=temp[p];
}
void mergesort(int arr[],int l,int h,int size)
{
  if(l<h)
  {
    int mid=(l+h)/2;
    mergesort(arr,l,mid,size);
    mergesort(arr,mid+1,h,size);
    merge(arr,l,mid,h,size);
  }
}

int unique(int arr[50],int size)
{
  for(int i=0;i<size;i++)
  {int ct=0;
    if(arr[i]==arr[i+1])
    {
      ct++;
      i++;
    }
    if(ct==0)
    {
      return arr[i];
    }
  }
}
int main()
{

    cout<<"enter size "<<endl;
    int size,arr[50];
    cin>>size;
    for(int j=0;j<size;j++)
    cin>>arr[j];
    mergesort(arr,0,size-1,size);
    cout<<"after swapping"<<endl;
    for(int i=0;i<size;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
    int n=unique(arr,size);
    cout<<n;
    return 0;


}
