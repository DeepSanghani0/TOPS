//Write a program to find the multiplication values and the cubic values using inline function.
#include<iostream>
using namespace std;
class multiplication
{
public: 
    int multiply;
    int x;
    int y;
        
    inline int  multi(int x,int y)
    {
    return x*y;
    }
    inline int cubex(int x)
    {
        return x*x*x;
    }
    inline int cubey(int y)
    {
        return y*y*y;
    }
};
int main()
{
    int x,y;
    cout<<"enter value of x: ";
    cin>>x;
    cout<<"enter value of y: ";
    cin>>y;
    multiplication obj;
    cout<<"value of multiply is: "<<obj.multi(x,y)<<endl;
    cout<<"value of cube of x is: "<<obj.cubex(x)<<endl;
    cout<<"value of cube of y is: "<<obj.cubey(y)<<endl;
}
