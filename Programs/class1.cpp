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
        cout<<"Roll No.:"<<rollno<<endl;
        cout<<"Marks:"<<marks<<endl;
    }
};

int main(){
    Student s1,s2;
    s1.inputDetails();
    s1.displayDetails();
     s2.inputDetails();
    s2.displayDetails();
    return 0;
}