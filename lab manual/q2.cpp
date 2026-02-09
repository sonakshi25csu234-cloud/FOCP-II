#include<iostream>
using namespace std;
class Area{
    int r;
    float area;
    public:
    void getData(){
        cout<<"Enter the radius of fountain";
        cin>>r;
    }

    void calcArea(){
        area=3.14*r*r;
        cout<<"The area of fountain is"<<area;
    }
};

int main(){
    Area obj;
    obj.getData();
    obj.calcArea();
    return 0;

}



