//Ishika Singhal
//24070123048
//Code:
#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key)
            return i; // Found at index i
    }
    return -1; // Not found
}

int main() {
    int arr[] = {10, 25, 30, 45, 50};
    int key = 30;
    int size = sizeof(arr) / sizeof(arr[0]);

    int result = linearSearch(arr, size, key);
    if (result != -1)
        cout << "Key found at index " << result << endl;
    else
        cout << "Key not found." << endl;

    return 0;
}

//OUTPUT:
//Key found at index 2
