#include<iostream>
using namespace std;
class A
{
public:     
    void adata()
    {
        cout<<"your name is deep"<<endl;
    }
};
class B : virtual public A
{
public: 
    void bdata()
    {
        cout<<"name: yug"<<endl;
    }
};
class C : virtual public A
{
public: 
    void cdata()
    {
        cout<<"name : meet"<<endl;
    }
};
int main()
{
    A a;
    B b;
    C c;
    a.adata();
    b.bdata();
    c.cdata();

    return 0;
}