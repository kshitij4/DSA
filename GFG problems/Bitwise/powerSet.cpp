#include<iostream>
#include<string>
#include<cmath>

using namespace std;

void  getPowerSet(string s)
{
    int len=s.length(); // len=3
    int n = pow(2,len); // n=8
  
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<len;j++)
        {
            if(((i)&(1<<j))!=0)
                cout<<s[j];
        }
        cout<<endl;
    }
}
int main()
{
    string str ="abc";
    getPowerSet(str);
}