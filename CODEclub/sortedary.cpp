#include <iostream>
using namespace std;

bool isSortedAndRotated(int arr[], int n) {
    int count = 0;

     for (int i = 0; i < n; i++) {
        if (arr[i] > arr[(i + 1) % n]) {
            count++;
        }
    }

    return count <= 1;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];  
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    if (isSortedAndRotated(arr, n)) {
        cout << "The array is sorted and rotated." << endl;
    } else {
        cout << "The array is NOT sorted and rotated." << endl;
    }

    return 0;
}

