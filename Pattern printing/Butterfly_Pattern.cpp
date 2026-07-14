// *                 * 
// * *             * * 
// * * *         * * * 
// * * * *     * * * * 
// * * * * * * * * * * 
// * * * *     * * * * 
// * * *         * * * 
// * *             * * 
// *                 *
#include<iostream>
using namespace std;
int main()
{
    int n ; 
    cout<<"Enter the number:";
    cin>>n;
    for (int i = 1; i < n; i++)
    {
        // print *
        for (int j = 1; j <= i; j++)
        {
           cout<<"* ";
        }
        // space print
         for (int j = 1; j <= 2*n-2*i; j++)
        {
           cout<<"  ";
        }
        // print *
         for (int j = 1; j <= i; j++)
        {
           cout<<"* ";
        }
        cout<<"\n";
    }
    for (int i = n; i >= 1; i--)
    {
        // print *
        for (int j = 1; j <= i; j++)
        {
           cout<<"* ";
        }
        // space print
         for (int j = 1; j <= 2*n-2*i; j++)
        {
           cout<<"  ";
        }
        // print *
         for (int j = 1; j <= i; j++)
        {
           cout<<"* ";
        }
        cout<<"\n";
    }
   
}