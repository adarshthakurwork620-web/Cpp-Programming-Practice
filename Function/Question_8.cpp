//  Write a recursive function factorial(int n) to calculate n! (n factorial). Recall that n! = n * (n-1) *...*1, and the base case is 0! = 1.

// To find the factorial of a number, you multiply it by every positive integer smaller than it until you reach 1.  For example, 5! =5×4×3×2×1=120

#include<iostream>
using namespace std;

int factorial(int n)
{
    if (n==0)
    {
        return 1;
    }
    else
    {
        return n* factorial(n-1);
    }
}
int main()
{
    int n;
    cout<<"Number:";
    cin>>n;
    cout<<n<<" factorial is :"<<factorial(n);
}
