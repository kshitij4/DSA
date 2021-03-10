#include <bits/stdc++.h>
 
using namespace std;

int main()
{
    string dna;
    cin>> dna;
    int Maxlen = 1;
    int len = 1;
    for(unsigned int i=1;i<dna.size();i++)
    {
        if(dna[i-1]==dna[i])
            len++;
        else
            len=1;
        Maxlen = max(len,Maxlen);
    }

    cout<< Maxlen;
    return 0;
}
