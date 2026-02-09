#include<iostream>
using namespace std;
class Average
{
    private:
    int a,b,c;
    public:
    void getdata();
    void Display();
};

void Average::getdata()
{
    cout<<"Enter first number";
    cin>>a;
    cout<<"Enter second number";
    cin>>b;
    cout<<"Enter third number";
    cin>>c;
}

void Average::Display()
{
    cout<<"Average of three numbers is: "<<(a+b+c)/3;
}   

