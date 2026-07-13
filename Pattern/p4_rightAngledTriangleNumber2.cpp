/*
Q4:Pattern:
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
solved by --Amarjeet Kumar
*/
#include<iostream>
using namespace std;
void rightAngledTriangleNumberPatternII(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<i<<" ";
        }
        cout<<"\n";
    }
}
int main()
{
    int n;
    cout<<"Enter the value of N\n";
    cin>>n;
    rightAngledTriangleNumberPatternII(n);
    return 0;
}