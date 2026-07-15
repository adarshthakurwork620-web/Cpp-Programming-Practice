// 25 16 9 4 1 
// 25 16 9 4 1 
// 25 16 9 4 1 
// 25 16 9 4 1 
// 25 16 9 4 1

#include<iostream>
using namespace std;
int main()
{
    int i, j,n;
    cout<<"Enter the number:";
    cin>>n;
    for ( i = 0; i < n; i++)
    {
       for ( j = n; j > 0; j--)
       {
            cout<<j*j<<" ";
       }
       cout<<"\n";
    }
    
}