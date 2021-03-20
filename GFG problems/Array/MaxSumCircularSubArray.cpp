
#include <bits/stdc++.h>

using namespace std;

int maxSumSubarray(int a[],int n)
{
    int sum = 0;
    int maxSum = INT_MIN;
    for(int i=0;i<n;i++)
    {
        sum +=a[i];
        maxSum = max(sum,maxSum);
        if(sum<0)
            sum=0;
    }
    return maxSum;
}

int minSumSubarray(int a[],int n)
{
    int minSum = a[0];
    int minEnding = a[0];
    for(int i=1;i<n;i++)
    {
        minEnding = min(minEnding + a[i],a[i]);
        minSum = min(minSum,minEnding);
    }
    return minSum;
}

int MaxCircularSum(int a[],int n)
{
    int maxSum = maxSumSubarray(a,n);
    if(maxSum < 0)
        return maxSum;
    int minSum = minSumSubarray(a,n);
    int TotSum = 0;
    for(int i=0;i<n;i++)
    {
        TotSum +=a[i];
    }

    return max(maxSum , TotSum - minSum );   
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<< MaxCircularSum(arr,n);

    return 0;
}