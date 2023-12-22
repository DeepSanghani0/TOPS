#include<iostream>
using namespace std;
class Memory {
    public:
        void msg() {
            cout << "New operator is use to create the new memory." << endl;
        }
};

int main() {
    Memory* obj = new Memory(); // 
    obj->msg(); 

    delete obj; // Deleting the object

    return 0;
}
