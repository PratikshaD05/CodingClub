#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements (n-1): ";
    cin >> n;  

    int arr[n];  
    cout << "Enter the elements (1 to " << n + 1 << " with one missing): ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
	 int expectedSum = (n + 1) * (n + 2) / 2;

    int actualSum = 0;
    for (int i = 0; i < n; i++) {
        actualSum += arr[i];
    }

   	int missingNumber = expectedSum - actualSum;

    cout << "The missing number is: " << missingNumber << endl;

    return 0;
}

