#include<iostream>

using namespace std;

int countBitsFlip(int a, int b){
    
    int flipCount =0;
    while(a!=0 || b!=0)
    {
        if((a&1) !=(b&1))
            flipCount ++;
        a= a>>1;
        b =b>>1;
    }
    return flipCount;
}

int main()
{
    int a,b;
    cin>>a>>b;
    cout<< countBitsFlip(a,b);
}