#include "iostream"
using namespace std;
class Person
{
protected:
    string name;
    int code;
public:
    void get_name(string);
    void get_code(int);
};
void Person::get_name(std::string n) {
    name =n;
}
void Person::get_code(int c) {
    code=c;
}

class Account:public Person
{
protected:
    float pay;
public:
    void get_payment(float);
};
void Account::get_payment(float p) {
    pay=p;
}

class Admin:public Person
{
protected:
    string experience;
public:
    void get_experience(string);
};
void Admin::get_experience(std::string ex) {
    experience=ex;
}

class Master:public Person, public Account,public Admin
{

};