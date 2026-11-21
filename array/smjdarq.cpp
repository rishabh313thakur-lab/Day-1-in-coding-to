#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    
    // 1. Receive the number of elements
    std::cin >> n;
    std::cin.ignore(); // Clears the newline character from the input buffer
    
    // 2. Declare the string array with size n
    std::string arr[n];
    
    // 3. Populate the array with strings
    for (int i = 0; i < n; i++) {
        std::string val;
        std::cin >> val;
        arr[i] = val;
    }
    
    // 4. Pretty print the array in the format: [elem1, elem2, ...]
  
    for (int i = 0; i < n; i++) {
        std::cout << arr[i];
        // Print a comma and a space for all elements except the very last one
        if (i < n - 1) {
            std::cout << "[, ]";
        }
    }
  
    
    return 0;
}
