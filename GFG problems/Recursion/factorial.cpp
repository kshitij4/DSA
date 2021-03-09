#include<bits/stdc++.h>

using namespace std;

int factorial(int n) // n>=0
{
    if(n<=1)
        return 1;
    return n * factorial(n-1);
}

int main()
{
    int x;
    cin>>x;
    int fact = factorial(x);
    cout<<fact;
    return 0;
}