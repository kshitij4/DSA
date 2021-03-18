//to find leaders in an array
//an element is a leader if every element on its right is smaller
#include <bits/stdc++.h>

using namespace std;

vector<int> getLeaders(int a[],int n)
{
    vector<int> res;
    int currLeader = a[n-1];
    res.push_back(currLeader);
    for(int i=n-2;i>=0;i--)
    {
        if(a[i]>currLeader)
        {
            res.push_back(a[i]);
            currLeader = a[i];
        }
    }
    return res;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    vector<int> leaders = getLeaders(arr,n);

    for(int i=leaders.size()-1;i>=0;i--)
        cout<<leaders[i]<<" ";

    return 0;
}