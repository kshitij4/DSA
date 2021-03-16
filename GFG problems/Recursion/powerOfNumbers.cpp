#include<bits/stdc++.h>

#define mod 1000000007

using namespace std;

long long power(int N,int R)
{
    long long temp; 
    if(R == 0) 
        return 1; 
    temp = power(N, R / 2); 
    if (R % 2 == 0) 
        return (temp % mod * temp % mod)% mod; 
    else 
        return (temp % mod * temp % mod * N % mod)% mod;

}

long long reverse(int num)
{
    long long rev=0;
    while(num>0){
        rev = rev*10 + num%10;
        num = num/10;
    }
    return rev;
}
int main()
{
    int num;
    cin>> num;
    int rev = reverse(num);
    cout<< power(num,rev);
    return 0;
}
