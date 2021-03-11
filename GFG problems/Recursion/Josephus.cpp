//Given a circular arrangement of n people and in every iteration
// kth person is killed.
// We have to find the surviver 
#include <bits/stdc++.h>

using namespace std;

// n = people starting from 0 to n-1
// k = position of person to be killed every iteration
int jos(int n,int k)
{
    if(n==1) //when only 1 element left he is the surviver at pos 0
        return 0;
    return (jos(n-1,k)+k) % n;  
}

int main()
{
    int n,k;
    cin>> n >> k;
    int res = jos(n,k);
    cout<<res;

    return 0;
}