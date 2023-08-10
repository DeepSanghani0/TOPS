#include <iostream>
using namespace std;
template <class X, class Y>
void fun(X a, Y b)
{
    int c;
    c = a;
    a = b;
    b = c;
    cout << "After swaping Value of a is : " << a <<endl;
    cout << "After swaping Value of b is : " << b <<endl;
}

int main()
{
    int a, b;
    cout << "emnter value of a: ";
    cin >> a;
    cout << "enter value of b: ";
    cin >> b;
    fun(a, b);
    return 0;
}