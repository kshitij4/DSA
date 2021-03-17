// To move all the zeros to the end of the array,
// keeping the order of the elements of the array
//Naive soln
#include <bits/stdc++.h>

using namespace std;

void shiftZeros(int a[], int n)
{
    int low = 0, high = n-1;
    while(low < high)
    {
        if(a[low]==0)
        {
            int l =low;
            while(l<high)
            {
                a[l] = a[l+1];
                l++;
            }
            a[high]=0;
            high--;
        }
        if(a[low]!=0)
            low++;
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    shiftZeros(arr,n);

    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}