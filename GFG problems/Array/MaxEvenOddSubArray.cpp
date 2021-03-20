
#include <bits/stdc++.h>

using namespace std;

int getMaxEvenOdd(int a[],int n)
{
    int count = 1;
    int maxCount = 1;

    for(int i=1;i<n;i++)
    {
        if((a[i-1]%2==0 && a[i]%2==1)||(a[i-1]%2==1 && a[i]%2==0))
        {
            count++;
            maxCount = max(maxCount,count);
        }
        else
            count=1;
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

    cout<< getMaxEvenOdd(arr,n);

    return 0;
}