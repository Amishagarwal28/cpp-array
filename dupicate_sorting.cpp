#include<iostream>
using namespace std;
int partition(int arr[],int l,int h,int size)
{
  int i=l,j=h;
  int pivot=arr[l];
  while(i<j)
  {
    do{
      i++;
    }while(arr[i]<=pivot);
    do{
      j--;
    }while(arr[j]>pivot);
    if(i<j)
    swap(arr[i],arr[j]);
  }
  swap(arr[l],arr[j]);
  return j;
}

void quicksort(int arr[],int l,int h,int size)
{
  if(l<h)
  {
    int j=partition(arr,l,h,size);
    quicksort(arr,l,j,size);
    quicksort(arr,j+1,h,size);
  }
}

int duplicate(int arr[50],int size)
{
  for(int i=0;i<size;i++)
  {
    if(arr[i]==arr[i+1])
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
    quicksort(arr,0,size-1,size);
    cout<<"after swapping"<<endl;
    for(int i=0;i<size;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
    int n=duplicate(arr,size);
    cout<<n;
    return 0;


}
