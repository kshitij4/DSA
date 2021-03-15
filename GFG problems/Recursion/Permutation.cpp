#include <bits/stdc++.h>

using namespace std;

void per(string s,int i=0)
{
    if(i== s.size()-1)
    {
        cout<< s <<" "<<endl;
        return;
    }
    for(int j=i;j<s.length();j++)
    {
        swap(s[i],s[j]);
        per(s,i+1);
    }
}

int main()
{
    string str;
    cin>>str;
    per(str);

    return 0;
}