#include <iostream>

using namespace std;

class Solution {
    public:
    int solve() {

    }
};

int insertion_sort(int n, int arr[])
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

    return n;
}

int main()
{

}