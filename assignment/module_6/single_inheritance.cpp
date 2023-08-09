/*  Assume a class cricketer is declared. Declare a derived class batsman from cricketer .
    Data member of batsman. Total runs, Average runs and best performance.
    Member functions input data, calculate average runs, Display data. (Single Inheritance)
*/
#include <iostream>
using namespace std;
class cricketer
{
public:
    int i, run[5];
    int player()
    {
        int player;
        cout << "how many player are there: ";
        cin >> player;
    }
    int runs()
    {
        cout<<"enter run of 5 players\n";
        for (i = 0; i < 5; i++)
        {
            cin>>run[i];
        }
    }
};

class batsman : public cricketer
{
public:
    int averages;
    int average()
    {
        int total;
        total = run[0] + run[1] + run[2] + run[3] + run[4];
        cout << "\ntotal run is : " << total;
        averages = total / 5;
        cout << "\naverage of given run is: " << averages;
    }

    int best()
    {
        int max;
        max = -1;
        for (i = 1; i < 5; i++)
        {
            if (run[i] > max)
            {
                max = run[i];
            }
        }
        cout<<"\nbest performance is: "<<max;
    }
};
int main()
{
    batsman c;
    c.player();
    c.runs();
    c.average();
    c.best();
    return 0;
}