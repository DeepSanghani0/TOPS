/*Define a class to represent lecture details. Include the following members and
the program should handle at least details of 5 lecturer.
Data members:
a) Name of the lecturer
b) Name of the subject
c) Name of course
d) Number of lecturers
Data functions:
a) To assign initial values
b) To add a lecture details
c) To display name and lecture details
*/
#include <iostream>
using namespace std;
class lacture
{
    string lecturer, sub, course;
    int lacno;

public:
    initialize()
    {
        cout << "enter name of lacturer: ";
        cin >> lecturer;
        cout << "subject of lacturer: ";
        cin >> sub;
        cout << "entjer course name: ";
        cin >> course;
        cout << "enter number of lactur: ";
        cin >> lacno;
    }
    display()
    {

        cout << "|" << lecturer << "\t" << sub << "\t" << course << "\t"
             << " " << lacno << "\t|";
    }
};
int main()
{
    lacture detail[5];
    for (int i = 0; i < 5; i++)
    {
        detail[i].initialize();
    }
    cout << "_________________________________\n";
    cout << "|name   subject  coursde lac.no |" << endl;
    for (int i = 0; i < 5; i++)
    {
        detail[i].display();
        cout << endl;
    }
    cout << "----------------------------------";
    return 0;
}