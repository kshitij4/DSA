
#include <bits/stdc++.h>

using namespace std;

int getSum(int a[],int n)
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

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<< getSum(arr,n);

    return 0;
}