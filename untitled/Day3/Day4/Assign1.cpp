#include "iostream"
using namespace std;
class Arraysort
{
public:
    void swap (int *x, int *y)
    {
        int temp =*x;
        *x=*y;
        *y=temp;
    }
    void separate(int num[],int size)
    {
        int numf=0,numl=size-1;
        while(numf<numl)
        {
            while(num[numf]%2==0 && numf<numl)
                numf++;
            while(num[numl]%2==1 && numf<numl)
                numl--;

            if(numf<numl)
            {
                swap(&num[numf], &num[numl]);
                numf++;numl--;
            }
        }
    }
};
/*
int main()
{
    Arraysort as;
    int num[]={2,1,3,4,5,7,8};
    int n=sizeof(num)/ sizeof(num[0]);
    cout<<"Original Array: "<<"\n";
    for(int i=0;i<n;i++)
        cout<<num[i]<<" ";
        as.separate(num,n);
    cout<<"\n"<<"Array after seperate: \n";
    for(int i=0;i<n;i++)
        cout<<num[i]<<" ";
    return 0;
}
 */