
#include <bits/stdc++.h>

using namespace std;

int getSum(int a[],int n,int k)
{
    int sum = 0;
    for(int i=0;i<k;i++)
    {
        sum+= a[i];
    }
    int maxSum = sum;
    int start=0,end=k-1;
    while(end<n-1)
    {
        sum -= a[start];
        sum += a[end+1];
        maxSum = max(sum,maxSum);
        start++;
        end++;
    }
    return maxSum;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int k;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cin>>k;
    cout<< getSum(arr,n,k);

    return 0;
}