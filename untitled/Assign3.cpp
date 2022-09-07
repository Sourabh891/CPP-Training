#include "iostream"
using namespace std;
class DB;
class DM
{
    int dm;
    int dcm;
public:
    void setValues(int val1, int val2)
    {
        dm=val1;
        dcm=val2;
    }
    friend void add(DM,DB);
};
class DB
{
    int df;
    int di;
public:
    void setValues(int val1, int val2)
    {
        df=val1;
        di=val2;
    }
    friend void add(DM,DB);
};
void add(DM obj1,DB obj2)
{

    cout<<"Sum of distance of Obj1 and Obj2 is: "<<obj1.dm+obj2.df<<" meters"<<"\n";
    cout<<"Sum of distance of Obj1 and Obj2 is: "<<obj1.dcm+obj2.di<<" feets";
}
/*int main(void)
{
    DM D;
    DB D2;
    D.setValues(20,30);
    D2.setValues(12,13);
    add(D,D2);
}*/