/*
Define a class to represent a bank account. Include the following members:
Data Member: -
a) Name of the depositor -
b) Account Number
c) Type of Account -
d) Balance amount in the account -
e) Member Functions -
f) To assign values -
g) To deposited an amount -
h) To withdraw an amount after checking balance -
i) To display name and balance
*/

#include<iostream>
using namespace std;

//define variable
class bankdetail
{
    string name,actype,acno;
    int bal1,bal2,deposite,trncn,withdraw;

   public: 
   int  initialize()
   {
    cout<<"enter account holder name: ";
    cin>>name;
    cout<<"enter account type(Savings Account,Current Account,NRI Account,Salary Account.): ";
    cin>>actype;
    cout<<"enter acount number: ";
    cin>>acno;
    cout<<"enter your bank balance: ";
    cin>>bal1;
    return 0;
   }
   //transection
    int transection()
    {
    cout<<"enter 0 for no transection" <<endl<<"1 for deposite"<<endl<< "2 for withdrow";
    cin>>trncn;
    switch (trncn)
    {
    case 0:
        bal2=bal1;
        break;
    case 1:
        cout<<"how much amount do you want to deposite: ";
        cin>>deposite;
        bal2=bal1+deposite;
        break;
    case 2:
        cout<<"how much amount do you want to withdrow: ";
        cin>>withdraw;
        if (withdraw > bal1)
        {
            cout<<"insufician balance";
            cout<<endl;
            bal2=bal1;
        }
        else
        {
        bal2=bal1-withdraw;
        }
        break;
    }    }
    //display 
   int display()
   {
        cout<<endl<<"name of account holder is: "<<name<<endl;
        cout<<"type of account: "<<actype<<endl;
        cout<<"ac/no.: "<<acno<<endl;
        cout<<"before transection balance: "<<bal1<<endl;
        cout<<"balance: "<<bal2<<endl;

        int contin;
        cout<<"do you want to continue?(press 1 for yes,0 for no): ";
        cin>>contin;
        if (contin == 1)
        {
            bal1=bal2;
            transection();
            display();
        }
        else
        {
            cout<<"Thank You! Visit Again";
        }
        return 0;
   }
};

int main()
{
    class bankdetail b1;
    b1.initialize();
    b1.transection();
    b1.display();
    return 0;
}