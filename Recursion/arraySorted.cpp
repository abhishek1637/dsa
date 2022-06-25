#include <iostream>
using namespace std;

// we decide first, recusrion decide later
bool isSorted(int a[], int size) {

    if(size==1)
        return true;
    
    if (a[0] > a[1])
        return false;
    
   bool res = isSorted(a+1,size-1);

   return res;
}

// recursion decide first, we decide later
bool isSortedTrue(int a[], int size) {

    if (size==1)
        return true;
    
    bool res = isSortedTrue(a+1,size-1);

    if (res == false) {
        return false;
    } else {
        if (a[0] < a[1]) {
            return true;
        } else {
            return false;
        }
    }
    
}

int main() {
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;

    int* arr = new int[n];

    cout << "Enter the elements in the array " << endl;
    
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }

    cout << "Array is " << (isSortedTrue(arr,n) ? "sorted" : "not sorted");
}