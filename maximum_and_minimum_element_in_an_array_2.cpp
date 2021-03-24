#include <bits/stdc++.h>

using namespace std;
void max_min(int arr[],int last)
{
    int start=0;
    int max=arr[0],min=arr[0];
    while(start<last-1)
    {
        if(max<arr[start]){
            max=arr[start];
        }
        if(max<arr[last])
        {
            max=arr[last];
        }
        if(min>arr[start]){
            min=arr[start];
        }
        if(min>arr[last])
        {
            min=arr[last];
        }

        start++;
        last--;
    }
    cout<<"Max="<<max;
    cout<<"\nMin="<<min;

}
int main()
{
    int arr[] = { 1000, 11, 445,
                  1, 330, 3000 };
    int arr_size = 6;
    max_min(arr,arr_size);
}