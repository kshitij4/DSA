#include<bits/stdc++.h>

using namespace std;

int sum1stN(int n) // n>=0
{
    if(n==0)
        return 0;
    return n + sum1stN(n-1);
}

int main()
{
    int n;
    cin>>n;
    int sum = sum1stN(n);
    cout<<sum;
}