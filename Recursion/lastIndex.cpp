#include <iostream>
using namespace std;

int lastIndex(int arr[], int size, int key) {
    if (size==0)
        return -1;
    
    int res = lastIndex(arr+1,size-1,key);

    if (res==-1) {
        if (arr[0] == key)
            return 0;
        else 
            return res;
    }
    else {
        return res+1;
    }
    
}

int main() {
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

    int index = lastIndex(arr,size,element);

    cout << "Found at index : " << index << endl;
}