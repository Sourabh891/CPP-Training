#include "iostream"
using namespace std;
class Staff
{
protected:
    int code;
    string name;
public:
    void get_code(int c);
    void put_code(void);
    void get_name(string n);
    void put_name(void);
};

void Staff::get_code(int c) {
    code=c;
}
void Staff::put_code(void) {
    cout<<"Code of Staff"<<code<<"\n";
}
void Staff::get_name(std::string n) {
    name=n;
}
void Staff::put_name(void) {
    cout<<"Name is "<<name<<"\n";
}

class Teacher:public Staff
{
protected:
    string subject,publication;
public:
    void get_subject(string s);
    void put_subject(void);
    void get_publication(string s1);
    void put_publication(void);
};
void Teacher::get_subject(std::string s) {
    subject=s;
}
void Teacher::put_subject(void) {
    cout<<"Subject is "<<subject<<"\n";
}
void Teacher::get_publication(std::string s1) {
    publication=s1;
}
void Teacher::put_publication(void) {
    cout<<"Publication is"<<publication<<"\n";
}

class Typist:public Staff
{
protected:
    int speed;
public:
    void get_speed(int sp);
    void put_speed(void);
};
void Typist::get_speed(int sp) {
    speed=sp;
}
void Typist::put_speed(void) {
    cout<<"Speed is"<<speed<<"\n";
}

class Officer:public Staff
{
protected:
    float grade;
public:
    void get_grade(float g);
    void put_grade(void);
};
void Officer::get_grade(float g) {
    grade=g;
}
void Officer::put_grade(void) {
    cout<<"Grade are"<<grade<<"\n";
}

class Regular:public Typist
{

};

class Casual:public Typist
{
protected:
    int daily;
    float wages;
public:
    void get_daily(int d);
    void put_daily(void);
    void get_wages(float w);
    void put_wages(void);
};
void Casual::get_daily(int d) {
    daily=d;
}
void Casual::put_daily(void) {
    cout<<"Daily hours are"<<daily<<"\n";
}
void Casual::get_wages(float w) {
    wages=w;
}
void Casual::put_wages(void) {
    cout<<"Wages for work are"<<wages<<"\n";
}

class result:public Regular, public Casual, public Typist, public Teacher, public Officer, public Staff
{
public:
    void display();
};
void result::display() {
    put_daily();
    put_subject();
    put_grade();
    put_publication();
}
/*
int main()
{
    result r1;
    r1.get_code(1011);
    r1.
}
*/