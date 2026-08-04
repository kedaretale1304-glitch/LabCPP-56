#include<iostream>
#include<string>
using namespace std;

class Student{
    private:
    string name;
    int rollno;
    float marks;

    public:
    void inputDetails(){
        cout<<"Enter Student Name:";
        getline(cin>>ws,name);
        cout<<"Enter Roll No.:";
        cin>>rollno;
        cout<<"Enter Marks:";
        cin>>marks;
    }

    void displayDetails() const{
        cout<<"\n----Student Details----\n";
        cout<<"Name:"<<name<<endl;
        cout<<"Roll No.:"<<name<<endl;
        cout<<"Marks:"<<marks<<endl;
    }
};

int main(){
    Student s;
    s.inputDetails();
    s.displayDetails();
    return 0;
}