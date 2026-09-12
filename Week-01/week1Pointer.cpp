#include<iostream>
using namespace std;

int global_var = 77;

void changePtrValue (int **p){
    *p = &global_var;
}

int main() {
    // int *p = new int; 
    // *p = 25; 
    // cout <<  *p << endl;
    // delete p;
    // p = nullptr;
    // cout << p << endl;

    // int num[] = {10, 20, 30, 40, 50};
    // int* ptr = num; 

    // cout << "Array elements using pointer arithmetic:" << endl;
    // for(int i = 0; i < 5; i++) {
    //     cout << "Index " << i << ": " << *(ptr + i) << endl; 
    // }


    // Dynamically allocate an array of integers based on user input

    // int size;
    // cout << "How many numbers? ";
    // cin >> size;

    // int *p = new int[size];
    // for(int i = 0; i < size; i++) {
    //     cout << "Enter number " << i + 1 << ": ";
    //     cin >> *(p + i);
    // }

    // cout << "Numbers entered: ";
    // for (int i = 0; i < size; i++){
    //     p[i] = (i+1) * 10;
    // }
    

    // for(int i = 0; i < size; i++) {
    //     cout << *(p + i) << " ";
    // }
    // cout << endl;

    // delete[] p;
    // p = nullptr;


    int num = 5;
    int *ptr = &num;
    cout << "Before test: " << num <<endl << *ptr <<endl << ptr << endl;

    changePtrValue(&ptr);
    cout << "After test: " << num << endl << *ptr << endl << ptr << endl;

    return 0;
    
}
