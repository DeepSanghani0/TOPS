#include <iostream>
using namespace std;
class A
{
public:
    int a(int a, int b, int c)
    {
        return a + b + c;
    }
    int b(int a, int b, int c)
    {
        return a + b + c;
    }
};
int main()
{
    A obj;
    cout << "sum of given number is: " << obj.a(12, 13, 14) << endl;
    cout << "sum of given number is: " << obj.b(12, 13, 14);
}