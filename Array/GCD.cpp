#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a=50,b=15;
    int gcd=1;

    int minimum=min(a ,b);
    for (int i = 1; i <= minimum; i++)
    {
        if (a%i==0 && b%i==0)
        {
            gcd=i;
        }    
    }
    cout<<"The GCD of "<< a <<" and "<< b <<" is: "<< gcd;
}