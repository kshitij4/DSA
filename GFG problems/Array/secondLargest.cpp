// To find the second largest element in the array 
#include <bits/stdc++.h>

using namespace std;

int secondLargestEle(int arr[],int n)
{
    int max = arr[0];
    int secMax = -1;
    for(int i=1;i<n;i++)
    {
        if(arr[i] > max )
        {
            secMax = max;  
            max = arr[i];
        }
        else if(arr[i]< max)
        {  
            if(arr[i] > secMax)
            {
                secMax =arr[i];
            }
        }
    }
    return secMax;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    cout<< secondLargestEle(arr,n);
    return 0;
}