#include<bits/stdc++.h>

using namespace std;

//0 1 1 2 3 5 8 13 21 34 55 89 ...
int fibb(int n) // n>=0
{
    if(n<=1)
        return n;
    return fibb(n-1) + fibb(n-2);
}

int main()
{
    int x;
    cin>>x;
    int f =fibb(x);
    cout<<f;
}