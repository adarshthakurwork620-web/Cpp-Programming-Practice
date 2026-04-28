#include<iostream>
using namespace std;
int main()
{
    int n;
    int arr[100];
    cout<<"Enter the number of elements (0-100):";
    cin>>n;
    cout<<"Enter "<<n<<" integers:"<<"\n";
    for (int i = 1; i <= n; i++)
    {
        cout<<"Element "<<i <<":";
        cin>>arr[i];
    }
    cout<<"The even numbers in the array are: ";
    for (int i = 1; i <= n; i++)
    {
        if (arr[i]%2==0)
        {
             cout<<arr[i]<<"\t";
        }   
    }
}    