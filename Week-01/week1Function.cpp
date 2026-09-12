#include <iostream>
using namespace std;

void printArray(const int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << "Index " << i << ": " << arr[i] << endl;
    }
}

int main() {
    int num[] = {17, 10, 8, 17, 9, 15};

// Find the maximum value in the array
    int max = num[0];
    for(int i = 1; i < 6; i++) {
        if(num[i] > max) {
            max = num[i];
        }
    }

    printArray(num, 6);
    cout << "Maximum value in the the array: " << max << endl;

}
