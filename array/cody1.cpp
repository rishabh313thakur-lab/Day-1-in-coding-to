#include <iostream>
using namespace std ; 
void values(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        // Write code here
            cout<< arr[i] << endl ; 
    }
}

int main() {
    int numbers[] = {109, 4, 7, 19, 57, 216, 68, 89, 132, 63};
    int size = 10 ;
    values(numbers, size);
    return 0;
}