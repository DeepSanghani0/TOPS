#include<iostream>
using namespace std;
class simple
{
    int principal,rate,time,interest,SI;
    public: 
    simple()
    {
        cout<<"enter value of principal: ";
        cin>>principal;
        cout<<"enter value of rate of interst: ";
        cin>>rate;
        cout<<"enter time period(in year): ";
        cin>>time;
    }
    initialize()
    {
        SI=((principal*rate*time)/100);
        cout<<"simple interst of given values are : "<<SI<<endl;
        cout<<"total payable amount is "<< SI+principal<<endl; 
    }
};

int main()
{
    simple s1;
    
    return 0;
}