
#include <bits/stdc++.h>

using namespace std;

int getMajority(int a[],int n)
{
    int count = 1;
    int res =0;
    //loop to find the candidate for majority element
    for(int i =1;i<n;i++)
    {
        if(a[i]==a[res])
            count++;
        else 
            count --;
        if(count == 0)
        {
            res=i;
            count=1;
        }
    }
    count=0;
    //to decide whether candidate is majority or not
    for(int i=0;i<n;i++)
    {
        if(a[i]==a[res])
            count++;
    }
    if(count<= n/2)
        return -1;
    return res;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<< getMajority(arr,n);

    return 0;
}