#include <iostream>
#include <vector>
using namespace std;
double prod(double arr[], int size) {
    // Write your code below
    double val = 1.0;
    int n;
    for(int i = 0 ; i<n ; i++ ){
val *= arr[i] ;

    }
    return val  ; 
}

int main() {
    int n;

    std::cin >> n;
    std::cin.ignore();
    double arr[n];

    for (int i = 0; i < n; i++) {
        double val;
        std::cin >> val;
        arr[i] = val;
    }

    double result = prod(arr, n);
    std::cout << "Product of array elements: " << result << std::endl;
    return 0;
}