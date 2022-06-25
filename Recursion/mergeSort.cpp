#include <iostream>
using namespace std;

void merge(int arr[], int s, int e) {
   int mid = (s+e)/2;
   int j = mid+1,i = s;
   int k=0;
   int* temp = new int[e-s+1];

   while (i<=mid && j <= e) {
       if (arr[i] <= arr[j]) {
           temp[k++] = arr[i++];
       } else {
           temp[k++] = arr[j++];
       }
   }

   while (i<=mid) {
       temp[k++] = arr[i++];
   }

   while (j<=e) {
       temp[k++] = arr[j++];
   }

    int m = 0;
   for (int p=s; p<=e;p++) {
       arr[p] = temp[m++];
   }
}

void merge_sort(int arr[], int s, int e) {
    if (s>=e) {
        return;
    }

    int mid = (s+e)/2;

    merge_sort(arr,s,mid);
    merge_sort(arr,mid+1,e);
    merge(arr,s,e);
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

    merge_sort(arr,0,size-1);

    for (int i=0;i<size;i++) {
        cout << arr[i] << " ";
    }
}