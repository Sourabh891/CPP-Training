#include "iostream"
using namespace std;
class Item
{
    int code;
    float price;
public:
    void getData(int c,float p)
    {
        code=c;
        price=p;
    }
    void putData()
    {
        cout<<"code"<<code<<" Price: "<<price<<"\n";
    }
};
const int s=2;
/*
int main()
{
    Item *p=new Item[s];
    Item *d=p;
    int x,i;
    float y;
    for(i=0;i<s;i++)
    {
        cout<<"Input code and price for item"<<i+1;
        cin>>x>>y;
        p->getData(x,y);
        p->putData();
        d->getData(x,y);
        d->putData();
    }
    return 0;
}*/