#include <iostream>
using namespace std;

// Binary Search Function
int binarySearch(int array[], int size, int target) {
    int left = 0;       // Starting index
    int right = size - 1; // Last index

    // Loop to perform binary search
    while (left <= right) {
        int mid = left + (right - left) / 2; // Calculate the middle index

        // If the middle element matches the target
        if (array[mid] == target) {
            cout << "The number " << target << " is found at index " << mid << "." << endl;
            return 1; // Exit the function with success
        }

        // If the target is greater, search the right half
        if (array[mid] < target) {
            left = mid + 1;
        } 
        // If the target is smaller, search the left half
        else {
            right = mid - 1;
        }
    }

    // If element is not found
    cout << "The number " << target << " is not found in the array." << endl;
    return 0; // Exit the function with failure
}

int main() {
    int size; // Variable to store size of the array

    // Ask user to input the size of the array
    cout << "Enter the size of the array: ";
    cin >> size;

    int array[size]; // Declare array of user-defined size

    // Ask user to input elements of the array
    cout << "Enter " << size << " sorted elements: ";
    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }

    int target; // Variable to store the target number
    cout << "Enter the number to search: ";
    cin >> target;

    // Call the binarySearch function
    binarySearch(array, size, target);

    return 0;
}
