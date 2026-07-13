/*
Q1. Pattern 1:
* * * * *
* * * * *
* * * * *
* * * * *
* * * * *
Solve By --Amarjeet Kumar
*/
#include<iostream>
using namespace std;
void rectangularStarPattern(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
}
int main()
{
    int n = 0;
    cout<<"Enter the value of n:\n";
    cin>>n;
    rectangularStarPattern(n);
    return 0;
}