#include<iostream>
using namespace std;
class display;
class input
{
   private:
    int a;
    int b;
   public:
    input()
    {
        a=10;
        b=20;
        cout<<a<<" and "<<b<<"\n";
    }
    friend class display;
};
class display
{
    public:
    display(input i)
    {
        cout<<"sum ="<<i.a+i.b;
    }
};
int main()
{
    input i1;
    display d(i1);
}

