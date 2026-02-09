#include<iostream>
using namespace std;
class Temp{
    float fahr,celsius;
    public:
    void getData(){
        cout<<"Enter the fahrenheit readings.";
        cin>>fahr;
    }

    void conversion(){
        celsius=(fahr-32)/1.8;
        cout<<"the celsius readings are"<<celsius;
    }

};

int main(){
    Temp obj;
    obj.getData();
    obj.conversion();
    return 0;
}