
#include<iostream>
using namespace std;
void area(double r)
{
    double a=3.14*r*r;
    cout<<"Area of the  circle is - "<<a<<endl;
}
void area(int l,int b)
{
        cout<<"Area of the  rectangle is - "<<l*b<<endl;
}
void area(double h,double b)
{
    float ar=0.5*b*h;
        cout<<"Area of the  triangle is - "<<ar<<endl;

}
int main()
{
area(7.5);
area(4,8);
area(11.1,18.10);
}


