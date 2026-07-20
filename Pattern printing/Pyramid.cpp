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
// int s=1;

cout<<"Enter the number:" ;
cin>>n;

// for ( i = 1; i <= n; i++)
// {
//     for ( j = 0; j < n-i; j++)
//     {
//         cout<<"-";
//     }
//     for ( j = 1; j <= 2*i-1; j++)
//     {
//         cout<<"*";
//     }
//     cout<<"\n";
//     // s=s+2;
// }
    for (int i = 1; i <= n; i++)
    {
        for ( j = 1; j <= n-i; j++)
        {
            cout<<"-";
        }
        for (int j = 1; j <= i; j++)
        {
           cout<<"*";
        }
        for (int j = 2; j <=i ; j++)
        {
            cout<<"*";
        }
        
        cout<<"\n";  
    }
    
}