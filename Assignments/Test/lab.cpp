#include<iostream>
using namespace std;

class lab{
    private:
    int lab_no;
    int lab_pccount;
    float lab_charges;

    public:
    void getdata(){
        cout<<"Enter lab number";
        cin>>lab_no;

        cout<<"Enter no.of pc in lab";
        cin>>lab_pccount;

        cout<<"Enter lab charges";
        cin>>lab_charges;
    }
    void putdata(){
        cout<<"lab number: "<<lab_no<<endl;
        cout<<"lab pc count: "<<lab_pccount<<endl;
        cout<<"lab charges: "<<lab_charges<<endl;
    }
    void Bill(){
        float bill;
        bill=lab_pccount*lab_charges;
        cout<<"Total bill is "<<bill<<endl;
    }
    lab(){
     }
    
};

int main(){
    lab l1, l2, l3;

    l1.getdata();
    l1.putdata();
    l1.Bill();

    l2.getdata();
    l2.putdata();
    l2.Bill();

    l3.getdata();
    l3.putdata();
    l3.Bill();

    return 0;

}
