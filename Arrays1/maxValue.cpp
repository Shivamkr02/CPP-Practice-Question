// Find the maximum value out of all the elements in the array.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of an array: " << endl;
    cin >> n;
    
    int arr[n];
    cout << "Enter elements of an array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int x = arr[0];  // Initialize max with the first element
    for (int i = 1; i < n; i++) {  // Start from index 1
        if (arr[i] > x) {
            x = arr[i];  // Update max if a larger value is found
        }
    }

    cout << "Maximum value: " << x << endl;
    return 0;
