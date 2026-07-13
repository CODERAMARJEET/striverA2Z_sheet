/*
Q3:Pattern:
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
solved by --Amarjeet Kumar
*/
#include<iostream>
using namespace std;
void rightAngledTriangleNumberPattern(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
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
    rightAngledTriangleNumberPattern(n);
    return 0;
}