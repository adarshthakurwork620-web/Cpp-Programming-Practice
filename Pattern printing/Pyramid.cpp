//     *
//    ***
//   *****
//  *******
// *********

#include<iostream>
using namespace std;
int main()
{
int i,j,m,n;
int s=1;

cout<<"Enter the number:" ;
cin>>n;

for ( i = 0; i < n; i++)
{
    for ( j = 0; j < i+1; j++)
    {
        cout<<"-";
    }
    for ( m = s; m > 0; m--)
    {
        cout<<"*";
    }
    cout<<"\n";
    s=s+2;
}
}