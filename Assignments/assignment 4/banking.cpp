#include<iostream>
using namespace std;

//Saving Account Class
class SavingAccount {
    private:
    string accountHolderName;
    int accountNumber;
    double balance;
    double interestRate;

    public:
    SavingAccount(string name, int accNumber, double initiaBalance, double rate){
        accountHolderName=name;
        accountNumber=accNumber;
        balance=initiaBalance;
        interestRate=rate;
    }

    void deposit(double amount){
        if(amount>0){
            balance+=amount;
            cout<<"Deposited:$"<<amount<<endl;
        }
    }

    void withdraw(double amount){
        if(amount>0 && amount<=balance){
            balance-=amount;
            cout<<"Withdraw:$"<<amount<<endl;
        }else{
            cout<<"Insufficient balance!"<<endl;
        }
    }

    void applyInterest(){
        double interest=balance*interestRate/100;
        balance+=interest;
        cout<<"Interest Applied:$"<<interest<<endl;
    }

    void diplay(){
         cout<<"\n[saving Account]"<<endl;
         cout<<"account Holder:"<<accountHolderName<<endl;
         cout<<"account Number:"<<accountNumber<<endl;
         cout<<"Balance:$"<<balance<<endl;
         cout<<"Interest rate:"<<interestRate<<endl;
         }
};

//Checking Account Class
class CheckingAccount {
    private:
    string accountHolderName;
    int accountNumber;
    double balance;
    double transactionFee;

    public:
    CheckingAccount(string name, int accNumber, double initiaBalance, double fee){
        accountHolderName=name;
        accountNumber=accNumber;
        balance=initiaBalance;
        transactionFee=fee;
}

 void deposit(double amount){
        if(amount>0){
            balance+=amount;
            cout<<"Deposited:$"<<amount<<endl;
        }
    }

    
    void withdraw(double amount){
        double total=amount+transactionFee;
        if(total<=balance){
            balance-=total;
            cout<<"Withdraw:$"<<amount<<"($"<<transactionFee<<"fee applied)"<<endl;
        }else{
            cout<<"Insufficient balance for withdrawal+fee"<<endl;
        }
    }

      void diplay(){
         cout<<"\n[checking Account]"<<endl;
         cout<<"account Holder:"<<accountHolderName<<endl;
         cout<<"account Number:"<<accountNumber<<endl;
         cout<<"Balance:$"<<balance<<endl;
         cout<<"Transaction rate:"<<transactionFee<<endl;
         }
        };

        //main function 
        int main(){
            SavingAccount savings("Alice",1001,5000.0,3.0);
            CheckingAccount checking("Bob",1002,3000.0,20.0);

            //Operations on Saving Account
            savings.diplay();
            savings.deposit(1000);
            savings.withdraw(2000);
            savings.applyInterest();
            savings.diplay();

            //Operation on Checking account
            checking.diplay();
            checking.deposit(1500);
            checking.withdraw(1000);
            checking.diplay();
            return 0;
        } 

