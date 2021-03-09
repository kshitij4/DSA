//Program to find the max cuts we can make on the given rope of size n
// The cuts can be made of length a,b,c 
#include<bits/stdc++.h>

using namespace std;

int maxCuts(int n,int a,int b,int c)
{
    if(n==0) // if perfect cut is made
        return 0; 
    if(n<0) // if further cut results in -ve value
        return -1;
    int result = max({maxCuts(n-a,a,b,c),maxCuts(n-b,a,b,c),maxCuts(n-c,a,b,c)}); 
    // to get max value
    if(result == -1)
        return -1;
    return result+1; // to count no of max cuts

}
int main()
{
    int n,a,b,c;
    cin>>n >> a>>b>>c;
    int cuts = maxCuts(n,a,b,c);
    cout<< cuts;
    return 0;
}