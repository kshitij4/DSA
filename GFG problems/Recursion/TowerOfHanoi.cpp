//To print the steps to move the given no of disks from 1st to 3rd tower
#include<bits/stdc++.h>

using namespace std;

//n= number of disks to be moved from a to c
//a= source ,b=auxilary ,c= target tower
void TOH(int n,char A,char B,char C)
{
    if(n==1)
    {
        cout<<"Move 1 from "<< A <<" to "<< C <<endl;
        return;
    }   
    TOH(n-1,A,C,B);
    cout<<"Move "<< n <<" from "<< A <<" to "<< C <<endl;
    TOH(n-1,B,A,C);
}

int main()
{
    int n;
    cin>>n;
    TOH(n,'A','B','C');
    
    return 0;
}