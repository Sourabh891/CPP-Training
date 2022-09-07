#include "iostream"
using namespace std;
class M
{
protected:
    int m;
public:
    void get_m(int);
    void display();
};

void M::get_m(int x) {
    m=x;
}

class N
{
protected:
    int n;
public:
    void get_n(int);
    void display();
};

void N::get_n(int y) {
    n=y;
}
void N::display() {
    cout<<"Display N"<<"\n";
}

class P:public M,public N
{
public:
    void display();
};

void P::display() {
    cout<<"M= "<<m<<"\n";
    cout<<"N= "<<n<<"\n";
    cout<<"M*N= "<<m*n<<"\n";
}
/*
int main()
{
    P p;
    p.get_m(100);
    p.get_n(200);
    p.display();
    p.N::display();
    return 0;
}*/