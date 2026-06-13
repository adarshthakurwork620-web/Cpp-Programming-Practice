/* In C++, a friend function is a function that is not a member of a class,
 but it is allowed to access the private and protected members of that class.*/

/*Why use a Friend Function?

 Normally, private members can only be accessed by member functions of the same class.
  A friend function is given special permission to access them.

 How It Works:-

 friend void display(Demo obj);

 This line inside the class tells the compiler:

 "The function display() is my friend. It can access my private and protected members."

 Even though display() is defined outside the class, it can access obj.num.*/


/* Characteristics of Friend Functions

 Not a member of the class.
 Defined outside the class.
 Can access private and protected members.
 Called like a normal function.
 Does not use this pointer.
 Can be friend of multiple classes.
 It connot access the member directly by thier names and need object_name.member_name 
 to access any member. 

 */

 #include<iostream>
 using namespace std;

 class demo
 {
    private:
    int a;
    public:
    demo()
    {
        a=10;
    }
    friend int display(demo d);
     
    
 };
    int display(demo d)
    {
      int b =20;
      return d.a+b;
    }

 int main()
 {
    demo d1;
    cout<<display(d1);
 }
 