#include <iostream>
using namespace std;

int binarySearch(int arr[], int s, int e, int key) {
    
    if(s>e)
        return -1;
    
    int mid = (s+e)/2;

    if (arr[mid] == key){
        return mid;
    }
    else if(arr[mid] > key) {
        binarySearch(arr,s,mid-1,key);
    }
    else if(arr[mid] < key) {
        binarySearch(arr,mid+1,e,key);
    }
}

int main () {
    int size;
    cout << "Enter the size of the array : " ;
    cin >> size;

    int arr[20];
    cout << "Enter the elements of the array " << endl;

    for(int i=0; i<size; i++) {
        cin >> arr[i] ;
    }

    int key ;
    cout << "Enter the key to search " ;
    cin >> key;

    int res = binarySearch(arr,0,size-1,key);

cout << res << endl;
    
}