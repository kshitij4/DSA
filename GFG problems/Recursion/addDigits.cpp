#include<bits/stdc++.h>

using namespace std;

int sumOfDigits(int n) //n>=0
{
    if(n<=9)
        return n;
    return n%10 + sumOfDigits(n/10);    
}

int main()
{
    int num;
    cin>>num;
    int sum = sumOfDigits(num);
    cout<< sum; 
    return 0;
}