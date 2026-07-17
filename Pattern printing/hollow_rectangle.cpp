// * * * * * * * * 
// *             * 
// *             * 
// *             * 
// *             * 
// * * * * * * * * 
#include<iostream>
using namespace std;
int main()
{
    int r,c;
    cout<<"Enter the number row and col:";
    cin>>r>>c;
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            if (i==1 or j==1 or i==r or j==c)
            {
                cout<<"* ";
            }
            else
               cout<<"  ";
            
        }
        cout<<"\n";
        
    }
    
}