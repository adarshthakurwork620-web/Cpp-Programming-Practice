//         * 
//       * * 
//     * * * 
//   * * * * 
// * * * * *

#include<iostream>
using namespace std;
int main()
{
    int i,j,m,n;
    cout<<"Enter the number:";
    cin>>n;
    for (i = 0; i < n; i++)
    {
        for ( j = i; j < n-1; j++)
        {
            cout<<" ";
        }
        for ( j = 0; j < i+1 ; j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    
}