#include "iostream"
#include "cstring"
using namespace std;
class City
{
protected:
    char *name;
    int len;
public:
    City()
    {
        len=0;
        name=new char [30];
    }
    void getName()
    {
        char s[30];
        cout<<"Enter the city name: ";
        cin>>s;
        len=strlen(s);
        name=new char [len+1];
        strcpy(name,s);
    }
    void printName()
    {
        cout<<name<<"\n";
    }
};/*
int main()
{
    City *cptr[3];
    for(int i=0;i<3;i++)
    {
        cptr[i]=new City;
        cptr[i]->getName();
    }
    for(int i=0;i<3;i++)
    {
        cptr[i]->printName();
    }
}*/