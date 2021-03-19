
#include <bits/stdc++.h>

using namespace std;

int getMax1s(int a[],int n)
{
    int count = 0;
    int maxCount = 0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            if(a[i-1]==1)
                count++;
            else
                count=1;
            maxCount = max(count,maxCount);
        }
    }
    return maxCount;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<< getMax1s(arr,n);

    return 0;
}