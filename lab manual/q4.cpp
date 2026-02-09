#include<iostream>
using namespace std;
class Bill{
    int itemno,quantity;
    float unitprice,amount,totalbill;
    public:
    void getData(){
        cout<<"Enter the itemno. ";
        cin>>itemno;
        cout<<"Enter the quantity ";
        cin>>quantity;
        cout<<"Enter the unit price ";
        cin>>unitprice;
        
    }

    void calcBill(){
        amount=quantity*unitprice;
        totalbill=amount-(0.2*amount);
        cout<<"Total purchase "<<amount;
        cout<<"Total bill amount "<<totalbill;
     
    }
};

    int main(){
        Bill obj;
        obj.getData();
        obj.calcBill();
        return 0;

    }

