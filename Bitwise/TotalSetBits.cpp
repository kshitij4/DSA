#include<iostream>

using namespace std;

int getMaxPowOf2(int n)
{
    int x=0;
    while((1<<x) <= n)
        x++;
    return x-1;
}

int getTotalSetBits(int n)
{
    if(n==0)
        return 0;
    int x = getMaxPowOf2(n);

    int setTil2n = x * (1<<(x-1));

    int from2nton = n -(1<<x)+1;

    return ( setTil2n + from2nton + getTotalSetBits(n - (1<<x)));
}

int main()
{
    int n;
    cin>>n;
    cout<< "Total set bits are: " << getTotalSetBits(n);
}
