#include<iostream>
using namespace std;
int main()
{
    int a[3][3];
    int b[3][3];
    int sum[3][3];
   cout<<"1D:";
    for(int i =0 ;i < 3;i++ )
   {
        for (int j = 0; j <3; j++)
    {
            cin>>a[i][j];
    }
    
   }
   cout<<"2D:";
   for(int i =0 ;i < 3;i++ )
   {
        for (int j = 0; j <3; j++)
    {
            cin>>b[i][j];
    }
    }
   cout<<"print 1D:"<<"\n";
    for(int i =0 ;i < 3;i++ )
   {
        for (int j = 0; j < 3; j++)
    {
        if (i==j or i+j==2)
        {
             cout<<a[i][j]<<" ";
        }
        else
        {
            cout<<"-"<<" ";
        }
    }
        cout<<"\n";
   }
   cout<<"print 2D:"<<"\n";
   for(int i =0 ;i < 3;i++ )
   {
        for (int j = 0; j < 3; j++)
    { 
        if (i==1)
        {
            cout<<b[i][j]<<" ";
        }
        else
        {
            cout<<"-"<<" ";
        }
        
           
    }
        cout<<"\n";
   }
   cout<<"sum"<<"\n";
   for(int i =0 ;i < 3;i++ )
   {
        for (int j = 0; j < 3; j++)
    {
        if (i==1 && j==1)
        {   sum[i][j]=a[i][j]+b[i][j];
            cout<<sum[i][j] <<" ";
        }
        else
        {
            cout<<"-"<<" ";
        }
        
    }
        cout<<"\n";
   }

}