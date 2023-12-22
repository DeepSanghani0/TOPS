#include <iostream>
using namespace std;
template <typename T>
void swap(T* a, T* b) {
    T temp = *a;
    *a = *b;
    *b = temp;
}

template <typename T>
void Sort(T arr[]) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

template <typename T>
void printArray(T arr[]) {
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[10] = {64, 34, 25, 12, 22};
    Sort(arr);
    cout << "Sorted array: \n";
    printArray(arr);

    return 0;
}
