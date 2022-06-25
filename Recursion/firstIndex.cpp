#include <iostream>
using namespace std;

int FirstIndex(int arr[], int size, int element) {

    if (size==0) {
        return -1;
    }

    int res = FirstIndex(arr+1, size-1, element);

    if (arr[0] == element)
        return 0;
    if (res == -1) {
        return res;
    }
    return res+1;
}

int main () {
    int size;
    cout << "Enter the size of the array ";
    cin >> size;

    int* arr = new int[size];

    cout << "Enter the elements in the array" << endl;

    for (int i=0; i<size; i++) {
        cin >> arr[i];
    }

    cout << "Enter the elements to be searched : ";
    int element;
    cin >> element;

    int index = FirstIndex(arr,size,element);

    cout << "Found at index : " << index << endl;
}