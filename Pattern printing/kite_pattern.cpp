//           *           
//         * * *         
//       * * * * *       
//     * * * * * * *     
//   * * * * * * * * *   
// * * * * * * * * * * * 
// * * * * * * * * * * * 
//   * * * * * * * * *   
//     * * * * * * *     
//       * * * * *       
//         * * *         
//           *    
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
           cout<<"  ";
       }
       // * print
       for (int j = 1; j < 2*i; j++)
       {
           cout<<"*"<<" ";
       }
       // space print
       for (int j = 1; j <= n-i; j++)
       {
           cout<<"  ";
       } 
       cout<<"\n"; 
    }   
     for (int i =n; i >= 1; i--)
    {
       // space print
       for (int j = 1; j <= n-i; j++)
       {
           cout<<"  ";
       }
       // * print
       for (int j = 1; j < 2*i; j++)
       {
           cout<<"*"<<" ";
       }
       // space print
       for (int j = 1; j <= n-i; j++)
       {
           cout<<"  ";
       } 
       cout<<"\n"; 
    }   
}