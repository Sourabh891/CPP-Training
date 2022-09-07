#include<iostream>
using namespace std;
class mytime
{
    int hours;
    int minutes;

    public:
        void getTime(int h,int m);
        void putTime(void);
        void sum(mytime,mytime);
};

void mytime::getTime(int h, int m) {
    hours = h;
    minutes = m;
}

void mytime::putTime(void) {
    cout<<hours<<"hours and "<<minutes<<"minutes"<<"\n";
}

void mytime::sum(mytime t1, mytime t2) {
    minutes=t1.minutes+t2.minutes;
    hours=minutes/60;
    minutes=minutes%60;
    hours=hours+t1.hours+t2.hours;
}
/*
int main()
{
    mytime T1,T2,T3;
    T1.getTime(3,45);
    T2.getTime(4,30);
    T3.sum(T1,T2);
    cout<<"T1= ";
    T1.putTime();
    cout<<"T2= ";
    T2.putTime();
    cout<<"T3= ";
    T3.putTime();
    return 0;
}
*/