/*
Assume a class cricketer is declared. Declare a derived class batsman from cricketer .Data member of batsman. Total runs, Average runs and best performance. 
Member functions 
input data, calculate average runs, Display data. (Single Inheritance)
*/
#include<iostream>
using namespace std;
class cricketer
{
public:
    cricketer()
    {
        cout<<"name of cricketer is: 11 \n";
    }
};
class batsman : public cricketer
{
public:
    batsman()
    {
        cout<<"name of batsman is: 5";
    }
};
int main()
{
    batsman b1;
    return 0;
}