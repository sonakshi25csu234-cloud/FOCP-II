#include<iostream>
using namespace std;
//wap to sum of two numbers
class Addition{
    int num1,num2;
    int sum;
    public:
    void getData(){
        cout<<"Enter first number";
        cin>>num1;
        cout<<"Enter second number";
        cin>>num2;
    }
    void sumNumber(){
        sum= num1+num2;
        cout<<"The sum of two numbers is: "<<sum;
    }
};

int main(){
    Addition obj;
    obj.getData();
    obj.sumNumber();
    return 0;
}
//wap to check whether an indian citizen is eligible to vote or not using classes and objects
class Age{
    int age;
    public:
    void getAge(){
        cout<<"Enter age of the voter";
        cin>>age;
    }
    void checkAge(){
        if (age>=18){
            cout<<"the voter is eligible";
        }

        else{
            cout<<"The voter is ineligible";
        }

    }
};

    int main(){
        Age obj;
        obj.getAge();
        obj.checkAge();
        return 0;


    }