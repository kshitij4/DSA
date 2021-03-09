#include<bits/stdc++.h>

using namespace std;

bool isPalindrome(string &str,int start,int end)
{
    if(start>=end)
        return true;
    return (str[start] == str[end]) && isPalindrome(str,start+1,end-1);
}

int main()
{
    string str;
    cin >> str;
    bool p = isPalindrome(str,0,str.length()-1);
    if(p)
        cout<< "String is palindrome";
    else
        cout<< "String is not palindrome";
    return 0;
}