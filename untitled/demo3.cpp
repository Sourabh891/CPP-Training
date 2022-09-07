#include "iostream"
using namespace std;
class Point
{
    int x;
    int y;
public:
    Point()
    {
        cout<<"In Default\n";
        x=10;
        y=20;

    }
    Point(int value1,int value2)
    {
        cout<<"In Parameterized\n";
        x=value1;
        y=value2;
    }
    Point(Point &p)
    {
        cout<<"In call by ref Parameterized\n";
        p.x=90;
        p.y=70;
        x=p.x+1;
        y=p.y+1;
    }
    void printValue(void)
    {
        cout<<"X= "<<x<<", Y= "<<y<<"\n";
    }
};
/*int main(void)
{
    Point P1;
    P1.printValue();
    Point P2(100,200);
    P2.printValue();
    Point P3(P2);
    P3.printValue();
    cout<<"\n";
    P2.printValue();
    return 0;
}
*/