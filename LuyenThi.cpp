#include <iostream>
#include <cmath>

using namespace std;

// class Complex {
//     double real;
//     double imag;
//
//     public:
//         Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}
//
//         double mag() {
//             return getMag();
//         }
//
//         operator double () {
//             return getMag();
//         }
//
//     private:
//         double getMag() {
//             return sqrt(real * real + imag * imag);
//         }
// };

// class base {
//
//     int arr[10]; // 40
//
// };
//
// class b1: public base { };
//
// class b2: public base { };
//
// class derived: public b1, public b2 {};

// class B {
//      public:
//          ~B()
//          {
//              cout <<"B";
//          }
// };
//
// class A: public B
// {
//     public:
//     ~A()
//     {
//         cout <<"A";
//     }
// };

// class Base {
//     public:
//         Base() { cout<<"Constructor: Base"<<endl; }
//         virtual ~Base() { cout<<"Destructor : Base"<<endl; }
// };
//
// class Derived: public Base {
//     public:
//         Derived() { cout<<"Constructor: Derived"<<endl; }
//         ~Derived() { cout<<"Destructor : Derived"<<endl; }
// };

// class A {
//     public:
//         virtual void fun();
// };
//
// class B {
//     public:
//         void fun();
// };

// class Base {
//     public:
//         virtual void show() { cout<<" In Base "; }
// };
//
// class Derived: public Base {
//     public:
//         void show() { cout<<"In Derived "; }
// };
//
// class A {
//      public:
//          string toString()
//          {
//              return"A";
//          }
//  };
// class B:public A {
//     public:
//         string toString()
//         {
//             return"B";
//         }
// };

// class Base {
//
// public:
//
//     int fun() { cout << "Base::fun() called"; }
//
//     int fun(int i) { cout << "Base::fun(int i) called"; }
//
// };
//
// class Derived: public Base {
//     public:
//         int fun() { cout << "Derived::fun() called"; }
//
// };

// class B
//  {
//      public:
//          B()
//          {
//              cout <<"B";
//          }
//  };
// class A: public B
// {
//     public:
//         A()
//         {
//             cout <<"A";
//         }
// };

// class Person
// {
//     public:
//     void printInfo()
//     {
//         cout << getInfo() << endl;
//     }
//     string getInfo()
//     {
//         return"Person";
//     }
// };
// class Student:public Person
// {
//     public:
//     string getInfo()
//     {
//         return"Student";
//     }
// };

// class A {
//     public:
//         A()
//         {
//             t();
//             cout <<"i from A is "<< i << endl;
//         }
//
//         void t()
//         {
//             setI(20);
//         }
//
//         virtual void setI(int i)
//         {
//             this->i =2* i;
//         }
//
//         int i;
// };
//
// class B:public A
// {
//     public:
//         B()
//         {
//             // cout << "i from B is " << i << endl;
//         }
//
//         virtual void setI(int i)
//         {
//             this->i =3* i;
//         }
// };

// class C
//  {
//      public:
//      string toString()
//      {
//          return"C";
//      }
//  };
// class B:public C
// {
//     string toString()
//     {
//         return"B";
//     }
// };
//
// class A:public B
// {
//     string toString()
//     {
//         return"A";
//     }
// };
//
// void displayObject(C* p)
// {
//     cout << p->toString();
// }

class Base {

public:
    virtual void show() { cout<<" In Base "; }
};

class Derived: public Base {

public:
    void show() { cout<<"In Derived "; }

};

int main() {
    // Complex com(3.0, 4.0);
    // cout << com.mag();
    // cout << com;
    //cout << sizeof(derived);
    //A a;
    // Base *Var = new Derived();
    // delete Var;

    // int a = sizeof(A), b = sizeof(B);
    //
    // if (a == b) cout << "a == b";
    // else if (a > b) cout << "a > b";
    // else cout << "a < b";

    // Base *bp = new Derived;
    // bp->Base::show();

    // B b;
    // cout << static_cast<A>(b).toString() << b.toString() << endl;

    // Derived d;
    //
    // d.fun(5);
    //A a;

    // Person().printInfo();
    // Student().printInfo();

    // A* p =new B();

    // A a; B b; C c;
    // displayObject(&a);
    //
    // displayObject(&b);
    //
    // displayObject(&c);

    Base *bp = new Derived;

    bp->Base::show();
    return 0;
}