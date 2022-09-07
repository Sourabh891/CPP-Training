#include "iostream"
#include "fstream"
#include "iomanip"
using namespace std;
class Inventory
{
  char name[10];
  int code;
  float cost;
public:
    void readData();
    void writeData();
};
void Inventory::readData() {
    cout<<"Enter Name: ";
    cin>>name;
    cout<<"Enter Code: ";
    cin>>code;
    cout<<"Enter Cost: ";
    cin>>cost;
}
void Inventory::writeData() {
    cout<<setiosflags(ios::left)
    <<setw(10)
    <<name
    <<setiosflags(ios::left)
    <<setw(10)
    <<code
    <<setprecision(2)
    <<setw(10)
    <<cost
    <<endl;
}/*
int main()
{
    Inventory item[3];
    fstream file;
    file.open("ITEM1",ios::in | ios::out);
    cout<<"Enter Details for 3 Items: \n\n";
    for(int i=0;i<3;i++)
    {
        item[i].readData();
        file.write((char *) &item[i],sizeof(item[i]));
    }
    file.seekg(0);
    cout<<"Output>>>\n\n";
    for(int i=0;i<3;i++)
    {
        file.read((char *) &item[i],sizeof (item[i]));
        item[i].writeData();
    }
    file.close();
    return 0;
}*/