//Write a program to find the multiplication values and the cubic values using inline function.
#include<iostream>
using namespace std;
class multiplication
{
    int multiply;
    int x;
    int y;
public: 
    inline int  multi()
    {
    cout<<"enter value of x";
    cin>>x;
    cout<<"enter value of y";
    cin>>y;
        multiply=x*y;
        cout<<"value of multiply = "<<multiply<<endl;
    }
    inline int cube()
    {
        int square1,square2;
        square1= x*x;
        square2= y*y;
        cout<<"square of "<< x <<" is : "<< square1<<endl; 
        cout<<"square of "<< y <<" is : "<< square2<<endl; 
        return 0;
    }
};
int main()
{
    multiplication multiply;
    multiply.multi();
    multiply.cube();
    return 0;
}