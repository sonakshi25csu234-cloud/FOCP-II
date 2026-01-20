#include<iostream>
using namespace std;
// int main()
// {
//     int num1, num2;
//     int sum;
// cout<<"Enter first number";
// cin>>num1;
// cout<<"Enter 2nd number";
// cin>>num2;
// sum = num1+num2;
// cout<<"The sum of two numbers is " <<sum;
// return 0;
// }
    
//write a prgrm to add subtract multiply and divide
/*int main(){
int num1, num2;
int difference,product,quotient;
cout<<"Enter first number";
cin>>num1;
cout<<"Enter 2nd number";
cin>>num2;
difference=num1-num2;
product=num1*num2;
quotient=num1/num2;
cout<<"The difference of two numbers is " <<difference;
cout<<"\nThe product of two numbers is " <<product;
cout<<"\nThe quotient of two numbers is " <<quotient;
return 0;
}*/

//write a prgrm to convert temp from fahrenheit to celsius in c++
/*
int main(){
    float fahrenheit,celsius;
    cout<<"Enter temperature in fahrenheit";
    cin>>fahrenheit;
    celsius=(fahrenheit-32)*5/9;
    cout<<"The temperature in celsius is " <<celsius;
    return 0;
}*/
//write a prgrm to calculate average marks of a student in five subject.. all the five subject marks should be entered by user
int main(){
    float sub1,sub2,sub3,sub4,sub5,average;
    cout<<"Enter marks of subject1";
    cin>>sub1;
    cout<<"Enter marks of subject2";
    cin>>sub2;
    cout<<"Enter marks of subject3";
    cin>>sub3;
    cout<<"enter marks of subject4";
    cin>>sub4;
    cout<<"Enter marks of subject5";
    cin>>sub5;
    average=(sub1+sub2+sub3+sub4+sub5)*100/500;
    cout<<"average of the student is"   <<average;

}