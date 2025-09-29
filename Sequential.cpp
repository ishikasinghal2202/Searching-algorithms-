//Ishika Singhal
//24070123048
//Code:
#include <iostream>
using namespace std;

int sequentialSearch(int arr[], int size, int key) {
    int i = 0;
    while (i < size) {
        if (arr[i] == key)
            return i;
        i++;
    }
    return -1;
}

int main() {
    int arr[] = {5, 15, 25, 35, 45};
    int key = 25;
    int size = sizeof(arr) / sizeof(arr[0]);

    int result = sequentialSearch(arr, size, key);
    if (result != -1)
        cout << "Key found at index " << result << endl;
    else
        cout << "Key not found." << endl;

    return 0;
}


//OUTPUT:
//Key found at index 2
















