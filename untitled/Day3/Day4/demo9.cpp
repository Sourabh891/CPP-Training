#include "iostream"
#include "cstring"
using namespace std;
class Error
{
    int e_code;
    char *err_desc;
public:
    Error(int c,char *d)
    {
        e_code=c;
        err_desc=new char[strlen(d)];
        strcpy(err_desc,d);
    }
    void display()
    {
        cout<<"Error code: "<<e_code<<"\nError description: "<<err_desc;
    }
};
/*
int main()
{
    try {
        int salary;
        cout<<"Enter salary: ";
        cin>>salary;
        if(salary<1000)
        {
            throw Error(101,"Salary Must be Greater than 1000$...");
        }else {
            cout<<"Your salary is: "<<salary<<"$\n";
        }
    }
    catch (Error e)
    {
        e.display();
    }
}*/