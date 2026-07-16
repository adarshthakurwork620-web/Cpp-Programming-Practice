//     *
//    * *
//   *   *
//  *     *
// *********
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number:";
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
         for (int j = 1; j <= n-i; j++)
        {
            cout<<" ";
        }
        for (int j = 1; j <= i; j++)
        {
            if (j==1 or i==n)
            {
                cout<<"*";
            }
            else
                cout<<" ";
            
        }
        for (int j = 2; j <= i; j++)
        {
            if (j==i or i==n )
            {
                cout<<"*";
            }
            else
                cout<<" ";
            
        }
        
        
        
        
        cout<<"\n";
    }
    
}