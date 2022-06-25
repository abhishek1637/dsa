#include <iostream>
#include <algorithm>
using namespace std;

int partition(int a[], int s, int e) {
    int pivot = a[s];
    int count = 0;

    for (int i=s+1; i <=e; i++) {
        if (pivot > a[i])
            count++;
    }
    int k = s+count;

    swap(a[s],a[k]);

    while (s<k && e>k) {
        if (a[s]>=pivot && a[e]<pivot) {
            swap(a[s],a[e]);
            s++;
            e--;
        }
        else if(a[s]<pivot) {
            s++;
        }
        else if (a[e]>pivot) {
            e--;
        }
    }
    return k;

}

void quickSort(int a[], int s, int e) {

    if (s>=e)
        return;

    int c = partition(a,s,e);

    quickSort(a,s,c-1);
    quickSort(a,c+1,e);
}

int main () {
    int size;
    cout << "Enter the size of the array : ";
    cin >> size;

    int* arr = new int[size];
    cout << "Enter the elements in the array : ";
    for (int i=0;i<size;i++) {
        cin >> arr[i];
    }

    quickSort(arr,0,size-1);

    for (int i=0;i<size;i++) {
        cout << arr[i] << " ";
    }
}