// * * * * * * * * * * 
// * * * *     * * * * 
// * * *         * * * 
// * *             * * 
// *                 * 
// *                 * 
// * *             * * 
// * * *         * * * 
// * * * *     * * * * 
// * * * * * * * * * *
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the  umber:";
    cin>>n;
    for ( int i = 1; i <= n; i++)
    {   //star 
        for (int j = 1; j <= n-i+1; j++)
        {
           cout<<"*"<<" ";
        }
        //space 
        for ( int j = 2; j < 2*i ; j++)
        {
            cout<<"  ";
        }
        // star
         for ( int j = n-i+1; j >= 1; j--)
       {
         cout<<"*"<<" ";
       }
        cout<<"\n";
    }
    
    for ( int i = n; i >=1; i--)
    {
        for (int j = 1; j <= n-i+1; j++)
        {
           cout<<"*"<<" ";
        }

        for ( int j = 2; j < 2*i ; j++)
        {
            cout<<"  ";
        }
         for ( int j = n-i+1; j >= 1; j--)
       {
         cout<<"*"<<" ";
       }
        cout<<"\n";
    }
    
}
