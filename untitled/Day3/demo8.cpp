#include "iostream"
using namespace std;
typedef
void(*FunPtr)(int);
void fibonacci(int n)
{
    int a=0,b=1,c=a+b;
    cout<<a<<b<<c;
    for(int i=c;i<=100;i++)
    {
        a=b;
        b=c;
        c=a+b;
        cout<<c;
    }
}/*
int main()
{
    FunPtr ptr;
    ptr=&fibonacci;
    ptr(100);
    return 0;
}*/