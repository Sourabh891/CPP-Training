#include "iostream"
using  namespace std;
class Array01
{
public:
    void seperate01(int arr[],int n)
    {
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==0)
                count++;
        }
        for(int i=0;i<count;i++)
        {
            arr[i]=0;
        }
        for(int i=count;i<n;i++)
        {
            arr[i]=1;
        }
    }
    void print(int arr[],int n)
    {
        cout<<"Array after separation : ";
        for(int i=0;i<n;i++)
            cout<<arr[i]<<" ";
    }
};/*
int main()
{
    Array01 ar;
    int arr[]={0,1,0,0,1,1,0,0,0,1,1};
    int n= sizeof(arr)/ sizeof(arr[0]);
    cout<<"Original Array: ";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    ar.seperate01(arr,n);
    ar.print(arr,n);
    return 0;
}*/