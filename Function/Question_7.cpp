// Write a function power(double base, int exponent = 2) that calculates baseexponent. Use a default argument of 2 for the exponent. The function should calculate the square if the exponent is omitted during the call.

#include<iostream>
#include<cmath>
using namespace std;
double power(double base ,int exponent=2)
{
    return pow(base,exponent);
}
int main()
{
    int base,expo,squ;
    cout<<"Base and expo:";
    cin>>base>>expo;
    cout<<base<<" raised to "<<expo<<" :"<<power(base,expo)<<"\n";

    cout<<"Base:";
    cin>>squ;
    cout<<squ<<" squared (default) "<<expo<<" :"<<power(base);
}