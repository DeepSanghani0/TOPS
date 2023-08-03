/*
Create a class person having members name and age. Derive a class student having member percentage.
Derive another class teacher having member salary. Write necessary member function to initialize, read and write data.
Write also Main function (Multiple Inheritance)
*/
#include <iostream>
using namespace std;

class person
{
public:
    string personnm;
    int age;
    int detailperson()
    {
        cout << "enter name of person: ";
        cin >> personnm;
        cout << "enter age of person: ";
        cin >> age;
        return 0;
    }
};

class student
{
public:
    int percentage;
    string studentnm;
    int studentdetail()
    {
        cout << "enter name of student: ";
        cin >> studentnm;
        cout << "enter percentage: ";
        cin >> percentage;
        return 0;
    }
};

class teacher : public person, public student
{
public:
    string teachernm;
    int salary;
    int teacherdetail()
    {
        cout << "enter name of teacher: ";
        cin >> teachernm;
        cout << "enter salary: ";
        cin >> salary;
    }
    int display()
    {
        cout << "-----------------person-------------------" << endl;
        cout << "name of person is: " << personnm << endl;
        cout << "age of person is: " << age << endl;
        cout << "-----------------student-------------------" << endl;
        cout << "name of student is: " << studentnm << endl;
        cout << "percentageo is: " << percentage << endl;
        cout << "-----------------teacher-------------------" << endl;
        cout << "name of teacher is: " << teachernm << endl;
        cout << "salary is: " << salary << endl;
    }
};

int main()
{
    teacher obj;
    obj.detailperson();
    obj.studentdetail();
    obj.teacherdetail();
    obj.display();
    return 0;
}