#include <iostream>
#include <cstring>
using namespace std;

int allIndices(int arr[], int size, int x, int output[]) {

    if (size == 0) {
        return 0;
    }

    int s = allIndices(arr+1, size-1, x, output);

    if (arr[0] == x) {
        for (int i = s-1; i>=0; i--) {
            output[i+1] = output[i] + 1;
        }
        output[0] = 0;
        s += 1;
    } else {
        for (int i=0; i<s; i++) {
            output[i] += 1;
        }
    }
    return s;
}

int main () {
    int size;
    cout << "Enter the size of array : ";
    cin >> size;

    cout << "Enter the elements in the array : " << endl;

    int* arr = new int[size];

    for(int i=0; i<size; i++) {
        cin >> arr[i];
    }

    int x;
    cout << "Enter the key to be searched : ";
    cin >> x;

    int output[10] = {0};

    int s = allIndices(arr,size,x,output);

    cout << "got the size " << s << endl;
    for (int i=0; i<s; i++) {
        cout << output[i] << " " ;
    }
    
}
