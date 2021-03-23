
#include <bits/stdc++.h>

using namespace std;

bool isSum(int a[],int n,int sum)
{
    int currSum = a[0];
    int s=0;
    for(int i=1;i<n;i++)
    {
        while(currSum > sum && s<i-1)
        {
            currSum -= a[s];
            s++;
        }
        if(currSum == sum)
            return true;
        currSum += a[i];
    }
    return (currSum == sum);   
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int sum;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cin>>sum;
    cout<< isSum(arr,n,sum);

    return 0;
}