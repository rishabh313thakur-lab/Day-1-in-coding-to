#include <iostream>
using namespace std ;
double bigger(double arg1, double arg2) {
    // Complete the function
    if(arg1>arg2){
    cout<< arg1 ;
     } else 
     cout<< arg2 ; 
}

int main() {
    int iterations;
    double num1, num2;
    std::cin >> iterations >> num1 >> num2;
    for (int i = 0; i < iterations; i++) {
        // Write your code below
        double max_val = bigger(num1, num2);
        
        if (max_val == num1) {
            num1 = num1 / 2;
            cout << num1 << endl;
        } else {
            num2 = num2 / 2;
            cout << num2 << endl;
        }
 
    }
    return 0 ;
}

