#include <iostream>
using namespace std;

// Binary Search Function
int binarySearch(int target) {
    int array[9] = {10, 20, 30, 40, 50, 60, 70, 80, 90}; 
    int left = 0;
    int right = 8; 

    
    while (left <= right) {
        int mid = left + (right - left) / 2; 

        
        if (array[mid] == target) {
            cout << "The number " << target << " is found at index " << mid ;
            return 1; 
        }

        
        if (array[mid] < target) {
            left = mid + 1;
        } 
        
        else {
            right = mid - 1;
        }
    }

    // If element is not found
    cout << "The number " << target << "  not found in the array." ;
    return 0; 
}

int main() {
    binarySearch(40); 
    return 0;
}
