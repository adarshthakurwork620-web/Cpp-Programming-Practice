// Write a recursive function fibonacci(int n) that returns the n-th number in the Fibonacci sequence. The sequence starts 0, 1, 1, 2, 3, 5, 8, …, where F(0) equals 0, F(1) equals 1, and F(n) equals F(n-1) + F(n-2) for n greater than 1

#include<iostream>
using namespace std;

int fibonacci(int n)
{
    if (n==0)
    {
        return 0;
    }
    else if (n==1)
    {
        return 1;
    }
    
    return fibonacci(n-1)+fibonacci(n-2);
}
int main()
{
    int n;
    cout<<"Enter Number:";
    cin>>n;
    cout<<n<<"th number in the Fibonacci sequence is:"<<fibonacci(n);
}
