#include<bits/stdc++.h>
using namespace std;

class Account{
protected:
    string accountNo;
    string account_holder_name;
    float balance; 
    string description;
public:
    
    Account(string no,string name,float bal){
        accountNo=no;
        account_holder_name=name;
        balance=bal;
        description="";
    }
    void deposit(float amount){
        balance+=amount;
    }
    void deposit(float amount,string description){
        balance+=amount;
        this->description=description;
    }
    virtual void displayInfo()=0;
    float operator+(const Account &obj){
        return balance + obj.balance;
    }

    virtual ~Account(){}

};

class SavingAccount:public Account{
    int interestRate;
    
public:
    SavingAccount(int rate,string no,string name,float bal):Account(no,name,bal){
        interestRate=rate;
        
    }
    
    void displayInfo(){
        cout<<"---Saving Account:---"<<endl;
        cout<<"Account No:          "<<accountNo<<endl;
        cout<<"Account Holder Name: "<<account_holder_name<<endl;
        cout<<"Account Balance:     "<<balance<<endl;
        cout<<"Interest Rate:       "<<interestRate<<"%"<<endl;
        if(!description.empty()) cout<<"Description:       "<<description<<endl;
        cout<<endl;
    }
};
class CurrentAccount:public Account{
    int overdraft_limit;
    
public:
    CurrentAccount(int limit,string no,string name,float bal):Account(no,name,bal){
        overdraft_limit=limit;
        
    }

   

    void displayInfo(){
        cout<<"---Current Account:---"<<endl;
        cout<<"Account No:          "<<accountNo<<endl;
        cout<<"Account Holder Name: "<<account_holder_name<<endl;
        cout<<"Account Balance:     "<<balance<<endl;
        cout<<"Overdraft Limit:      "<<overdraft_limit<<endl;
        if(!description.empty()) cout<<"Description:       "<<description<<endl;
        cout<<endl;
    }

};


int main(){
    Account *ptr1=new SavingAccount(15,"xxxxx456","Riya",5000000.0);
    ptr1->displayInfo();
    Account *ptr2=new CurrentAccount(100000,"xxxxx456","Riya",5000000.0);
    ptr2->displayInfo();
    SavingAccount s1(15,"xxxxx456","Aiya",5000000.0);
    s1.deposit(70000.0);
    s1.displayInfo();
    


}
