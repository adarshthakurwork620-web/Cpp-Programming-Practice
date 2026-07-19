// 11111
// 22222
// 33333
// 44444
// 55555

#include<iostream>
using namespace std;
int main ()
{
    int i,j ,n;
    cout<<"Enter the number(1 to 100):";
    cin>>n;
    for ( i = 1; i <= n; i++)
    {
        for ( j = 1; j <= n; j++)
        {
            cout<<i;
        }
        cout<<"\n";
    }
    
}