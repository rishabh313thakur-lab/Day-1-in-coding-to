#include <iostream>
using namespace std;
// waf to print all the unique values in an array ;
void printu(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        int j;
        
        for (j = 0; j < size; j++) {
            if (i!= j && arr[i] == arr[j]) {
                break;
            }
        }

        if (j == size) {
            cout << arr[i] << " ";
        }
    }
}

int main() {
    int arr[] = {1, 2, 3, 1, 2, 3, 4};
    int size = 7;

    printu(arr, size);

    return 0;
}
