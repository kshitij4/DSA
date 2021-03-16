// A No is lucky if it is not deleted as part of the process:
// The process starts with deletion of every 2nd element , then 3rd and so on.
# include<bits/stdc++.h>

using namespace std;

bool isLucky(int n,int i=2) 
{
    if(n<i)
        return true;
    if(n%i == 0)
        return false;
    return isLucky(n-(n/i),i+1);
}
int main()
{
    int n;
    cin>>n;
    cout<< isLucky(n);

    return 0; 
}