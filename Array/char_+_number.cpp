// a+1 b+2 c+3 
// d+4 e+5 f+6 
// g+7 h+8 i+9 

#include<iostream>
using namespace std;
int main()
{
   char text[3][3];
   int arr[3][3];
   int sum[3][3];

  cout<<"enter a text :";
  for(char i =0 ;i < 3;i++ )
  {
   for (char j = 0; j <3; j++)
   {
       cin>>text[i][j];
   }
  }
 

   cout<<"\n"<<"enter a number :";
   for(int i =0 ;i < 3;i++ )
   {
        for (int j = 0; j <3; j++)
    {
            cin>>arr[i][j];
    }
    
   }
   cout<<"text";
   for(char i =0 ;i < 3;i++ )
   {
        for (char j = 0; j <3; j++)
        {
             cout<<text[i][j]<<" ";
        }
      cout<<"\n";
   }
cout<<"number ";
   for(int i =0 ;i < 3;i++ )
   {
        for (int j = 0; j < 3; j++)
    {
            cout<<arr[i][j]<<" ";
    }
        cout<<"\n";
   }
 cout << "\nText + Number:\n";

  for(int i =0 ;i < 3;i++ )
  {
   for (int j = 0; j < 3; j++)
   {
    //    sum[i][j] = text[i][j] <<arr[i][j];
    //    cout<<sum[i][j]<<" ";
            cout<<text[i][j]<<"+"<<arr[i][j]<<" ";
   }
      cout<<"\n";
  }
}