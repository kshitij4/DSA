//To remove all the duplicate values from a given sorted array
#include <bits/stdc++.h>

using namespace std;

int rmDuplicates(int a[],int n)
{
    int res = 1;
    for(int i=1;i<n;i++)
    {
        if(a[res-1]!= a[i])
        {
            a[res] = a[i];
            res ++;
        }
    }
    return res;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    n = rmDuplicates(arr,n);

    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}