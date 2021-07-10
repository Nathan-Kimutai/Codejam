#include <iostream>

using namespace std;

int[] merge_sort(int arr[],int p, int q, int r) {
    int n1 = p - q;
    int n2 = q - r;

    int L[n1];

    int R[n2];

    for(int i=0; i < n1; i++) {
        L[i] = arr[i];
    }

    int K[p - r + 1];

    int x = 1;
    int y = 1;
    for(int i=0; i < r; i++) {
        if(L[x] < R[y]) {
            arr[i] = L[x];
            x = x + 1;
        } else {
            arr[i] = R[y];
            y = y + 1;
        }
    }
    return arr;
}

int main()
{
    cout << "Hello World" << endl;
}
