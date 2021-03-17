#include <bits/stdc++.h>

using namespace std;

void reverse(int a[],int n)
{
    int start = 0,end = n-1;
    while(start < end )
    {
        int t= a[start];
        a[start] = a[end];
        a[end] = t;
        start++;
        end--;
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    reverse(arr,n);

    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";

    return 0;
}