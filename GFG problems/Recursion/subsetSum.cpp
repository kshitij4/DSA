// to find the count of subsets with sum equal to the given sum
#include<bits/stdc++.h>

using namespace std;

int noOfSubsets(int arr[],int n,int sum)
{
    if(n==0) 
        return (sum==0)? 1 : 0; // if the sum is exactly 0 that means the subset's sum = given sum
    
    return noOfSubsets(arr,n-1,sum) +  //when we dont include the last element  plus 
           noOfSubsets(arr,n-1,sum-arr[n-1]);  //when we include the last sum 
}

int main()
{
    int n;
    cin>>n;     
    int arr[n];

    for(int i=0;i<n;i++)
        cin>> arr[i];

    int sum;
    cin>>sum;
    cout<< noOfSubsets(arr,n,sum);

    return 0;
}