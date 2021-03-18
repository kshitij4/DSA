#include <bits/stdc++.h>

using namespace std;

int maxDiff(int a[],int n)
{
    int minEle =a[0];
    int diff =a[1]-a[0];
    for(int i=1;i<n;i++)
    {
        diff = max(diff,a[i]-minEle);
        minEle = min(minEle,a[i]);
    }
    return diff;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    cout<< maxDiff(arr,n);

    return 0;
}