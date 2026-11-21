#include <iostream>

int main() {
    int numLoops;
    std::cin >> numLoops;
    int sum = 0;
    
    // Iterate numLoops times
    for (int i = 0; i < numLoops; i++) {
        int num;
        // In each iteration get the input using std::cin >> num;
        std::cin >> num;
        sum += num;
    }
    
    // Print the actual variable 'sum' instead of the text "sum"
    std::cout << sum << std::endl;
    
    return 0;
}
