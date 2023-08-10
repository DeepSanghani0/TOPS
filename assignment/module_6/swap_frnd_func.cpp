#include<iostream>
using namespace std;
class swapnumber
{
public: 
    friend int swap(swapnumber &a);
private:
    int no1,no2,temp;
};
int swap(swapnumber &a)
{
    cout<<"enter first number: \n";
    cin>>a.no1;
    cout<<"enter second number: \n";
    cin>>a.no2;
    cout << "Before swaping Value of a is : " << a.no1 <<endl;
    cout << "Before swaping Value of b is : " << a.no2 <<endl;
    a.temp = a.no1;
    a.no1 = a.no2;
    a.no2 = a.temp;
    cout << "After swaping Value of a is : " << a.no1 <<endl;
    cout << "After swaping Value of b is : " << a.no2 <<endl;
}
int main()
{
    swapnumber no;
    swap(no);
    return 0;
}