#include<iostream>

using namespace std;

int getMaxPowOf2(int n) //to get the maximum power of 2 less than n
{
    int x=0;
    while((1<<x) <= n) // while(2^x <= n)
        x++;
    return x-1;
}

int getTotalSetBits(int n)
{
    if(n==0) // base case for recursive call
        return 0;
    int x = getMaxPowOf2(n);

    int setTil2n = x * (1<<(x-1));   // count of sets from 1 to 2^x

    int from2nton = n -(1<<x)+1;  // set bits from 2^x to n

    return ( setTil2n + from2nton + getTotalSetBits(n - (1<<x)));  // returning the sum and recursive call
}

int main()
{
    int n;
    cin>>n;
    cout<< "Total set bits are: " << getTotalSetBits(n);
}
