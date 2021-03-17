#include <bits/stdc++.h>

using namespace std;

bool isSorted(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        if(a[i]>a[i+1])
            return false;
    }
    return true;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    cout<< isSorted(arr,n);
    return 0;
}