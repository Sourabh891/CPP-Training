#include "iostream"
#include "fstream"
using namespace std;
class Item
{
    int itemCode;
    char name[255];
    float cost;
public:
    Item()
    {}
    Item(int itemcode, char nam[255], float cst)
    {
        itemCode=itemcode;
        name[255]=nam[255];
        cost=cst;
    }
    void createFile()
    {
        ofstream outf("Item");
        outf<<itemCode<<"\n";
        outf<<name<<"\n";
        outf<<cost<<"\n";
        outf.close();
    }
    void display()
    {
        ifstream inf("ITEM");
        inf>>name;
        inf>>itemCode;
        inf>>cost;
        cout<<"Item Name: "<<name;
        cout<<"Item Code: "<<itemCode;
        cout<<"Item Cost: "<<cost;
    }
};/*
int main()
{
    Item(101,"Pen",20.0);
    Item it;
    it.createFile();
    it.display();
}*/