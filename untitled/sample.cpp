#include <iostream>
using namespace std;

class sample1
{
    int a;
    int b;
    public:
    void seetValue(int x,int y)
    {
        a=x;
        b=y;
    }
    friend float mean(sample1 s);
};

float mean(sample1 s)
{
    return float(s.a+s.b)/2.0;
}
/*
int main(void)
{
    sample1 X;
    X.seetValue(13,13);
    cout<<"Mean value: "<<mean(X)<<"\n";
}*/