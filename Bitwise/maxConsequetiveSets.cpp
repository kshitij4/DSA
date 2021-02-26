#include<iostream>

using namespace std;

int maxConsecutiveOnes(int N)
{
    int max=0;
    int count=0;
    while(N!=0)
    {
        if(N&1==1)
        {
            count++;
            if(count>max)
                max=count;
        }
        else
        {
            count=0;
        }
        N=N>>1;
    }
    return max;
}

int maxConsecutiveOnes2(int N)
{
    int count = 0; 
    while (N!=0) 
    { 
        N = (N & (N << 1)); 
        count++; 
    } 
    return count; 
}

int main()
{
    int n;
    cin>>n;
    cout<< maxConsecutiveOnes(n);
}
