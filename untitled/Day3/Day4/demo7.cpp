#include "iostream";
using namespace std;
template<class T>
void display(T x)
{
    cout<<x<<"\n";
}
template <class T1,class T2>
void display(T1 x,T2 y)
{
    cout<<x<<" "<<y<<"\n";
}
template <class T1,class T2, class T3>
void display(T1 x, T2 y, T3 z)
{
    cout<<x<<" "<<y<<" "<<z;
}/*
int main()
{
    display(100);
    display(10,20);
    display(1,2.4,"Hello");
    return 0;
}*/