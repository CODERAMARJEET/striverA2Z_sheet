/*
Q5:Pattern:
* * * * *
* * * * 
* * * 
* * 
* 
solved by --Amarjeet Kumar
*/
#include<iostream>
using namespace std;
void reverseRightAngletriangle(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<5;j++)
        {
            cout<<"* ";
        }
        cout<<"\n";
    }
}
int main()
{
    int n;
    cout<<"Enter the value of N\n";
    cin>>n;
    reverseRightAngletriangle(n);
    return 0;
}