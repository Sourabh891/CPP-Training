#include "iostream"
using namespace std;
const int size=3;
template <class T>
class Vector
{
    T *v;
public:
    Vector(T* a)
    {
        v=new T[size];
        for(int i=0;i<size;i++)
        {
            v[i]=a[i];
        }
    }
    T operator *(Vector &y)
    {
        T sum=0;
        for(int i=0;i<size;i++)
        {
            sum+=this->v[i]*y.v[i];
            cout<<sum;
        }
        return sum;
    }
    void display()
    {
        for(int i=0;i<size;i++)
        {
            cout<<v[i]<<"\t";
        }
    }
};/*
int main()
{
    float x[3]={1.1,2.2,3.3};
    float y[3]={4.4,5.5,6.6};
    Vector<float>v1(x);
    Vector<float>v2(y);
    cout<<"v1= ";
    v1.display();
    cout<<"v2= ";
    v2.display();
    cout<<"V1 * V2= "<<v1*v2;
    return 0;
}*/