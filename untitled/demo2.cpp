#include "iostream"
using namespace std;
class class_2;
class class_1
{
    int value1;
public:
    void inData(int a)
    {
        value1=a;
    }
    void display(void)
    {
        cout<<value1<<"\n";
    }
    friend void exchange(class_1 &,class_2 &);
};
class class_2
{
    int value2;
public:
    void inData(int a)
    {
        value2=a;
    }
    void display(void)
    {
        cout<<value2<<"\n";
    }
    friend void exchange(class_1 &,class_2 &);
};
void exchange(class_1 & X,class_2 & Y)
{
    int temp=X.value1;
    X.value1=Y.value2;
    Y.value2=temp;
}
/*
int main(void)
{
    class_1 C1;
    class_2 C2;
    C1.inData(100);
    C2.inData(200);
    cout<<"Before exchanging values where: "<<"\n";
    C1.display();
    C2.display();
    exchange(C1,C2);
    cout<<"After Exchanging the value are: "<<"\n";
    C1.display();
    C2.display();
}
 */