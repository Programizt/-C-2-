﻿#include <iostream>
using std::cin;
using std::cout;
using std::endl;
int main()
{
    int* arr;
    int size;

    cout << "Enter the size of the array: ";
    cin >> size;

    arr = new int[size];
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < size; i++) {
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }
    delete[] arr;
}