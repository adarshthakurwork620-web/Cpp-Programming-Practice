// - - - - 1 
// - - - 1 2 1 
// - - 1 2 3 2 1 
// - 1 2 3 4 3 2 1
// 1 2 3 4 5 4 3 2 1
#include<iostream>
using namespace std;
int main()
{
    int n; 
    cout<<"Enter the number:";
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        // space print
        for (int j = 1; j <= n-i; j++)
        {
            cout<<"-";
        }
        // 1 to row
        for ( int j = 1; j<= i; j++)
        {
            cout<<j;
        }
        // row-1 to 1

        // for (int j = i; j > 1 ; j--)
        // {
        //     cout<<j-1;
        
        for (int j = i-1; j >= 1 ; j--)
        {
            cout<<j;
        }
        cout<<"\n";
    }
        // cout<<"\n";
    }    
