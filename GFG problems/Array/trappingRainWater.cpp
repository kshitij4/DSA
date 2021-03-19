
#include <bits/stdc++.h>

using namespace std;

int getMaxWater(int a[],int n)
{
    int water=0;
    int left[n],right[n];
    
    left[0] = a[0];
    for(int i=1;i<n;i++)
        left[i] = max(a[i],left[i-1]);
    
    right[n-1]=a[n-1];
    for(int i=n-2;i>=0;i--)
        right[i] = max(right[i+1],a[i]);
    
    for(int i=1;i<n-1;i++)
    {
        water += min(left[i],right[i])-a[i];
    }
    return water;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<< getMaxWater(arr,n);

    return 0;
}