
#include <bits/stdc++.h>

using namespace std;

//Rotation using temp array
void rotateByD(int a[],int n,int d) //T.C: 0(n),A.S: 0(d)
{
    int temp[d];
    int i;
    for(i=0;i<d;i++)
        temp[i] = a[i];
    for( ;i<n;i++)
        a[i-d]=a[i];
    for(int j=0,i=n-d;i<n;i++,j++)
        a[i]=temp[j];
}
//to reverse an array using starting and ending index
void reverse(int a[],int i,int j)
{
    while(i<j)
    {
        swap(a[i],a[j]);
        i++;
        j--;
    }
}
//Rotation using reverse method
void rotate(int a[],int n, int d) //T.C: 0(n), A.S: 0(1)
{
    reverse(a,0,d-1);
    reverse(a,d,n-1);
    reverse(a,0,n-1);
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int d;
    cin>>d;

    
    // rotateByD(arr,n,d);
    
    rotate(arr,n,d);

    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";

    return 0;
}