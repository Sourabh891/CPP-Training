#include "iostream"
using namespace std;
template<class X>
void s(X &x, X &y)
{
    X temp;
    temp=x;
    x=y;
    y=temp;
}
template<class T>
void bubble(T a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=n-1;i<j;j--)
        {
            if(a[j]>a[j-1])
            {
                s(a[j],a[j-1]);
            }
        }
    }
}
void function1(int m,int n, float a, float b)
{
    cout<<"Before swap: "<<m<<" "<<n<<"\n";
    s(m,n);
    cout<<"After Swap: "<<m<<" "<<n<<"\n";
    cout<<"Before swap: "<<a<<" "<<b<<"\n";
    s(a,b);
    cout<<"After Swap: "<<a<<" "<<b<<"\n";
}/*
int main()
{
    function1(10,20,30.3,40.40);
    int x[5]={10,50,-9,20,1};
    float y[5]={34.2,33.1,56.1,9.7,34.1};
    for(int i=0;i<5;i++)
    {
        cout<<x[i]<<" ";
    }
    cout<<"\n";
    bubble(x,5);
    for(int i=0;i<5;i++)
    {
        cout<<x[i]<<" "<<" ";
    }
    cout<<"\n";
    for(int i=0;i<5;i++)
    {
        cout<<y[i]<<" ";
    }
    cout<<"\n";
    bubble(y,5);
    for(int i=0;i<5;i++)
    {
        cout<<y[i]<<" "<<" ";
    }
    cout<<"\n";
    return 0;
}*/