#include<iostream>
using namespace std;
int main()
{
    int n,temp;
    int arr[100];
    cout<<"Enter the number of elements (0-100):";
    cin>>n;
    cout<<"Enter "<<n<<" integers:"<<"\n";
    for (int i = 1; i <= n; i++)
    {
        cout<<"Element "<<i <<":";
        cin>>arr[i];
    }
    cout<<"1st array: ";
    for (int i = 1; i <= n; i++)
    {
       cout<<arr[i]<<"\t";
    }
    cout<<"\n"<<"Enter "<<n<<" integers:"<<"\n";
    for (int i = 1; i <= n; i++)
    {
        cout<<"Element "<<i <<":";
        cin>>arr[i];
    }
    cout<<"Array BEFORE swap: ";
    for (int i = 1; i <= n; i++)
    {
       cout<<arr[i]<<"\t";
    }

    cout<<"\n"<<"Array AFTER swap: ";
        temp=arr[3];
        arr[3]=arr[4];
        arr[4]=temp;
    
    for (int i = 1; i <= n; i++)
    {
        // arr[3]=arr[3]+arr[4];
        // arr[4]=arr[3]-arr[4];
        // arr[3]=arr[3]-arr[4];
        cout<<arr[i]<<"\t";
    }
}   
 