#include<iostream>
using namespace std;

class Customer{
    
    string name;
    int account_number, balance;
    static int total_customer;
    static int total_balance;

    public:

    Customer(string name,int account_number,int balance){
        this->name = name;
        this->account_number= account_number;
        this->balance = balance;
        total_customer++;
        total_balance += balance;
    }

    void display(){
        
        cout<<name<<" "<<account_number<<" "<<balance<<" "<<total_customer<<endl;

    }

    static void display_totalBalance(){
        cout<<total_balance<<" "<<total_customer<<endl;
    }
};

//for initailizing the static data variable 

int Customer:: total_customer = 0;

int Customer:: total_balance = 0;

int main(){

    Customer A1("Naphees",1,1000);
    Customer A2("Rohit",2,1800);
    Customer A3("Naphees",1,3000);
    Customer A4("Rohit",2,2800);

    Customer::display_totalBalance();

    return 0;
}