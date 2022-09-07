#include "iostream"
using namespace std;
template <class T1=int ,class T2=int>
class Test
{
    T1 a;
    T2 b;
public:
    Test(T1 x,T2 y)
    {
        a=x;
        b=y;
    }
    void show()
    {
        cout<<"a= "<<a<<" b= "<<b<<"\n";
    }
};/*
int main()
{
    Test <char,int> test1('A',20);
    test1.show();
    Test<>
            test2(100,200);
    test2.show();
    return 0;
}*/