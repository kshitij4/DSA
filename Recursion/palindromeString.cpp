#include<bits/stdc++.h>

using namespace std;

bool isPalindrome(string s,int i,int j,int n)
{
    if(n<=1)
        return true;
    if(s[i] == s[j-1])
        return isPalindrome(s,i+1,j-1,n-2);
    else
        return false;
}

int main()
{
    string str;
    cin >> str;
    bool p = isPalindrome(str,0,str.length(),str.length());
    if(p)
        cout<< "String is palindrome";
    else
        cout<< "String is not palindrome";
    return 0;
}