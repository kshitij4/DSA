//Given two numbers n and p. We have to find n^p using recursion.
# include<bits/stdc++.h>

using namespace std;

long power(int n,int p)
{
    if(p==0)
        return 1;
    if(p==1)
        return n;
    return n*power(n,p-1);
}
int main()
{
    int n,p;
    cin>>n>>p;
    cout<< power(n,p);

    return 0;
}