// a 
// b b 
// c c c 
// d d d d 
// e e e e e 
#include<iostream>
using namespace std;
int main()
{
    int i , j ,n;
    
    cout<<"Enter the number:";
    cin>> n;
    for ( i = 1; i <= n; i++)
    {
        char name ='a'+(i-1);
        for ( j = 1; j <= i; j++)
        {
            cout<<name<<" ";
        }
        
        cout<<"\n";
    }
    
}