#include "iostream"
using namespace std;
class ABC;
class XYZ
{
    int data;
public:
    void setValue(int value)
    {
        data=value;
    }
    friend void add(XYZ,ABC);
};

class ABC
{
    int data;
public:
    void setValue(int value)
    {
        data=value;
    }
    friend void add(XYZ,ABC);
};

void add(XYZ obj1,ABC obj2)
{
    cout<<"Sum of data values of Obj1 and Obj2 is: "<<obj1.data+obj2.data;
}
/*
int main(void)
{
    XYZ X;
    ABC A;
    X.setValue(20);
    A.setValue(50);
    add(X,A);
}
 */