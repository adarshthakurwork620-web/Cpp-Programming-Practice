// * * * * * * * * * 
//   * * * * * * * 
//     * * * * * 
//       * * * 
//         * 
#include<iostream>
using namespace std;
int main()
{
    int n,f;
    cout<<"Enter the numebr:";
    cin>>n;
    for (int i = n; i >= 1; i--)
    {   //space print
        for (int j =n-i; j >=1 ; j--)
        {
            cout<<"  ";
        }
        //star print
        for (int j = 2*i-1; j >=1 ; j--)
        {
            cout<<"*"<<" ";
        }
       
        cout<<"\n";   
    }
}