// Convert a simple addition function that takes two integers and returns their sum into an inline function.

#include<iostream>
using namespace std;

int sum(int a,int b)
{
    return a+b;
}

int main()
{
    int a,b;
    cout<<"Enter a and b:";
    cin>>a>>b;
    cout<<"sum of"<<a <<"and" <<b <<":" <<sum(a,b);
}