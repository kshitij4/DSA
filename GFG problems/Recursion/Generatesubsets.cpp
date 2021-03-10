// To generate subset or powerset of a string
#include <bits/stdc++.h>

using namespace std;

//passing string as reference to avoid duplicacy of string s
//curr and i(index) are default arguments 
void getSubsets(string &s,string curr="",int i=0)
{
    if(i== s.length())
    {
        cout<<curr<<"\n";
        return;
    }
    getSubsets(s,curr,i+1);
    getSubsets(s,curr + s[i],i+1);
}

int main()
{
    string str;
    cin>>str;
    getSubsets(str);

    return 0;
}