
#include <bits/stdc++.h>

using namespace std;

int getMinFlips(bool a[],int n)
{
    int flips=0; 
    for(int i=1;i<n;i++)
    {
        if(a[i]!=a[i-1])
        {
            if(a[i]!=a[0])
                cout<<"From "<<i<<" to ";
            else
            {
                flips++;
                cout<<i-1<<endl;                
            }
        }            
    }
    if(a[n-1]!=a[0])
    {
        cout<<n-1<<endl;
        flips++;
    }
    return flips;    
}

int main()
{
    int n;
    cin>>n;
    bool arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<< getMinFlips(arr,n);

    return 0;
}