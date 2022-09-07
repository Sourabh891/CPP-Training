#include "iostream"
using namespace std;
class String
{
    string name1;
    string name2;
public:
    String(string n1,string n2)
    {
        name1=n1;
        name2=n2;
    }
    int operator == (string n1)
    {
        if(name1 == name2)
        {
            return 1;
        }else
        return 0;
    }
};
/*
int main()
{
    Strin
}
*/