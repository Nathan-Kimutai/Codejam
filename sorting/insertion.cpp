#include <iostream>

using namespace std;

// should return an array
void insertion_sort(int n, int arr[])
{
    int arr[5];
    for(int i=1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while( j > 0 && arr[j] > 0 ) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }

    print_arr(arr,5);
}

void print_arr(int arr[],int n) {
    for(int i=0; i < n; i++) {
        cout << arr[i];
    }

    cout << "\n";
}

int main()
{
    int arr[5] = {1,2,3,4,5};
    insertion_sort(5,arr);
}