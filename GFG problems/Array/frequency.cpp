
#include <bits/stdc++.h>

using namespace std;

vector<int> getFrequency(int a[],int n)
{
    vector<int> freq;
    int x = 0;
    freq.push_back(1);
    int curr =a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]==curr)
            freq[x]++;
        else
        {
            curr=a[i];
            x++;
            a[x]=a[i];            
            freq.push_back(1);
        }       
    }
    return freq;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    vector<int> freq = getFrequency(arr,n);
    
    for(int i=0;i<freq.size();i++)
    {
        cout<<arr[i]<<" "<<freq[i];
        cout<<endl;
    }
    return 0;
}