#include "iostream"
using namespace std;
class Fixed_deposit
{
    long int p_Amount;
    int year;
    float Rate;
    float R_Value;
public:
    Fixed_deposit()
    {}
    Fixed_deposit(long int p, int y, float r=0.12);
    Fixed_deposit(long int p, int y, int r);
    void display(void);
};
Fixed_deposit::Fixed_deposit(long p, int y, float r)
{
    p_Amount=p;
    year=y;
    Rate=r;
    R_Value=p_Amount;
    for(int i=0;i<=y;i++)
    {
        R_Value=R_Value*(1.0*r);
    }
}
Fixed_deposit::Fixed_deposit(long p, int y, int r)
{
    p_Amount=p;
    year=y;
    Rate=r;
    R_Value=p_Amount;
    for(int i=0;i<=y;i++)
    {
        R_Value=R_Value*(1.0+float(r)/100);
    }
}
void Fixed_deposit::display(void)
{
    cout<<"Principle Amount: "<<p_Amount<<"\n";
    cout<<"Return Amount: "<<R_Value<<"\n";
}
/*
int main(void)
{
    Fixed_deposit FD1,FD2,FD3;
    long int p;
    int y;
    float r;
    int R;
    cout<<"Enter amount, period, interest rate(Decimal Format)"<<"\n";
    cin>>p>>y>>R;
    FD1=Fixed_deposit(p,y,R);
    cout<<"Enter amount, period, interest rate(Decimal Format)"<<"\n";
    cin>>p>>y>>r;
    FD2=Fixed_deposit(p,y,r);
    cout<<"Enter amount, period"<<"\n";
    cin>>p>>y;
    FD3=Fixed_deposit(p,y);
    cout<<"Deposit-1"<<"\n";
    FD1.display();
    cout<<"Deposit-2"<<"\n";
    FD2.display();
    cout<<"Deposit-3"<<"\n";
    FD3.display();
}*/