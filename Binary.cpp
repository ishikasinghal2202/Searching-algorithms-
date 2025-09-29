//Ishika Singhal
//24070123048
//Code:
#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key) {
    int low = 0, high = size - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50}; // Must be sorted
    int key = 40;
    int size = sizeof(arr) / sizeof(arr[0]);

    int result = binarySearch(arr, size, key);
    if (result != -1)
        cout << "Key found at index " << result << endl;
    else
        cout << "Key not found." << endl;

    return 0;
}

//OUTPUT:
//Key found at index 3





