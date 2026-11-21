#include <iostream>
#include <vector>
using namespace std;
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

    double reverseArr[n];
    // Write your code below
    int start = 0 , end = n-1 ;
    while(start<end){
        swap(arr[start], arr[end]);
start++ , end--;
    }

    for (int i = 0; i<n; i++) {
        std::cout << reverseArr[i] << std::endl;
    }
    return 0;
}