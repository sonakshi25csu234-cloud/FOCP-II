#include<iostream>
using namespace std;
class Prime{
    
    int num;
    public:
    int c=0;

    void getnum(){
        cout<<"Enter the number.";
        cin>>num;
    }


    int prime(){ 
        
        for(int i=1;i<=num;i++){
            if (num%i==0){
                c=c+1;
            }

            else{
                continue;
            }

        }}

    int print(){
        if(c==2){
            cout<<"The number is prime.";

        }
        else{
            cout<<"The number is not prime.";

        }
    }
};

    int main(){

        Prime a1;
        a1.getnum();
        a1.prime();
        a1.print();
        return 0;


    }


    
    