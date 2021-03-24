#include<bits/stdc++.h>
using namespace std;
void reverse(int arr[],int size)
{
    int i=0,temp=0;
    for(i=0;i<=size/2;i++)
    {
        temp=arr[i];
        arr[i]=arr[size-1-i];
        arr[size-i-1]=temp;
    }
}
int main()
{
   int arr[] ={15,12,11,4,7,5,9};
   for(int i=0;i<7;i++){
       cout<<arr[i];
   }
   reverse(arr,7);
   for(int i=0;i<7;i++){
       cout<<arr[i]<<"\n";
   }
}