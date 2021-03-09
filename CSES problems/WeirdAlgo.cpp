#include<bits/stdc++.h>

using namespace std;

void getResult(long n)
{
    if(n==1)
        return;  
    if(n%2==0)
    {
        cout<<n/2<<" ";
        return getResult(n/2);
    }
    cout<< n*3+1<<" ";
    return getResult(n*3+1);
}

int main()
{
    long n;
    cin>>n;
    cout<<n<<" ";
    getResult(n);
    
    return 0;
}