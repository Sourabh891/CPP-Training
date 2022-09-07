#include "iostream"
#include "cstring"
using namespace std;
class Person
{
    char name[20];
    int age;
public:
    Person(char *s,int a)
    {
        strcpy(name,s);
        age=a;
    }
    Person & greater(Person & X)
    {
        if(X.age>=age)
        {
            return X;
        }
        else
        {
            return *this;
        }
    }
    void display()
    {
        cout<<"Name: "<<name<<" Age: "<<age<<"\n";
    }
};/*
int main()
{
    Person p1("John",37);
    Person p2("Marry",27);
    Person p3("Scoot",40);
    Person p=p2.greater(p3);
    p.display();
}*/