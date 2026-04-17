//Reverse a Number
#include<iostream>
using namespace std;
int rev(){
    int d,num,r=0;
    cout<<"Enter number:";
    cin>>num;
    while (num!=0)
    {
        d=num%10;
        r=r*10+d;
        num=num/10;
    }
    cout<<"reverse number is:"<<r;
}
int main(){
    rev();
}