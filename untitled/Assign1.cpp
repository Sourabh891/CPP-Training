#include "iostream"
using namespace std;
class BMS
{
    string name;
    int acc;
    string typeacc;
    float balance;
    float depo,withd;
public:
    void assignValues()
    {
        name="Sourabh";
        acc=6110011;
        typeacc="savings";
        balance=20000.0;
    }
    void deposit()
    {
        cout<<"Enter amount to deposit: ";
        cin>>depo;
        balance=balance+depo;
        cout<<"Account balance is: "<<balance;
    }
    void withdraw()
    {
        cout<<"Enter amount to withdraw: ";
        cin>> withd;
        if(withd<balance)
        {
            balance=balance-withd;
            cout<<"Account balance is: "<<balance;
        }
        else{
            cout<<"Sorry balance not available";
        }
    }
    void display()
    {
        cout<<"Name of Account holder: "<<name;
        cout<<"Account number: "<<acc;
        cout<<"Account type: "<<typeacc;
        cout<<"Balance: "<<balance;
    }

};
/*
int main()
{
    BMS b;
    int choice;
    cout<<"Enter you choice: ";
    cin>>choice;
    switch ( choice ) {
        case 1:
            cout<<"Assigned the Initial value to account";
            b.assignValues();
            break;

        case 2:
            cout<<"To Deposit Amount";
            b.deposit();
            break;

        case 3:
            cout<<"To Withdraw Amount";
            b.withdraw();
            break;

        case 4:
            cout<<"To Display details";
            b.display();
            break;

        default:
            cout<<"Wrong choice!!!!";
            break;
    }
    return 0;
}
 */