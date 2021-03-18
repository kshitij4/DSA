// T.C : 0(N) A.S: O(1)
#include <bits/stdc++.h>

using namespace std;

void rotate(int a[],int n)
{
    int temp = a[0];
    for(int i=0;i<n-1;i++)
        a[i] = a[i+1];
    a[n-1] =temp;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    rotate(arr,n);

    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";

    return 0;
}