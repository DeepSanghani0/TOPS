#include<iostream>
using namespace std;
int main()
{
    // declare a pointer to an int
int* p;

// allocate memory for an int using new
p = new int;

// assign a value to the allocated memory
*p = 10;

// print the value and the address
cout << "Value: " << *p << endl;
cout << "Address: " << p << endl;

// deallocate the memory using delete
delete p;
    return 0;
}

