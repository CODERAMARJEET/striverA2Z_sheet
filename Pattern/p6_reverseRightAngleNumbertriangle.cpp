/*
Q6:Pattern:
1 2 3 4 5 
1 2 3 4 
1 2 3 
1 2 
1 
solved by --Amarjeet Kumar
*/
#include<iostream>
using namespace std;
void reverseRightAngletriangle(int n)
{
    for(int i=n;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j<<" ";
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