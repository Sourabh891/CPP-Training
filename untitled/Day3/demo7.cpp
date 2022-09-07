#include "iostream"
using namespace std;
typedef
void(*FunPtr)(int,int);
void add(int i,int j)
{
    cout<<i<<"+"<<j<<"= "<<i+j<<"\n";
}
void subtract(int i,int j)
{
    cout<<i<<"-"<<j<<"= "<<i-j<<"\n";
}
/*
int main()
        {
            FunPtr ptr;
            ptr=&add;
            ptr(100,200);
            ptr=&subtract;
            ptr(200,100);
            return 0;
        }
*/