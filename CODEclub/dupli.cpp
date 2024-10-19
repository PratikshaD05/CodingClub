#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the sorted array: ";
    cin >> n;

    int arr[n];  
    cout << "Enter the elements of the sorted array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int uniqueIndex = 0; 

    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[uniqueIndex]) {
            uniqueIndex++;
            arr[uniqueIndex] = arr[i]; 
        }
    }

    cout << "Array after removing duplicates: ";
    for (int i = 0; i <= uniqueIndex; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

