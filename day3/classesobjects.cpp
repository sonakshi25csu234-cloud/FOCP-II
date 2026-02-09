//Write a programme to add two numbers using classes and objects.
#include <iostream>
using namespace std;

 class Addition 
    {
        private:
        int a,b;
        int sum;
        public:
        void getData();
        void Display();
    };

 void Addition :: getData()

 {
    cout<<"Enter first number";
    cin>>a;
    cout<<"Enter second number";
    cin>>b;
 }

 void Addition :: Display()
 {
    sum=a+b;
    cout<<"The sum of two numbers is "<<sum;
 }

 int main()
    {
        Addition a1;
        a1.getData();
        a1.Display();
        return 0;

    }