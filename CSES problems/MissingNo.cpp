#include<bits/stdc++.h>

using namespace std;

int getMissingNo(int arr[],int n)
{
    int x=0;
    for(int i=0;i<n;i++)
        x ^=arr[i];
    for(int i=1;i<=n+1;i++)
        x ^=i;
    return x;
}

int main()
{
    int n;
    cin>>n;
    int arr[n-1];
    for(int i=0;i<n-1;i++)
        cin>>arr[i];
    int num = getMissingNo(arr,n-1);
    cout<<num;

    return 0;
}