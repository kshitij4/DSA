#include<bits/stdc++.h>
using namespace std;

int  del(int a[],int x,int n)
{
    int idx;
    for(int i=0;i<n;i++)
    {
        if(a[i]==x)
        {    
            idx = i;
            break;
        }
    }
    for(int i=idx;i<n;i++)
    {
        a[i]=a[i+1];
    }
    return n-1;
}

int main()
{
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    n = del(arr,30,n);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}