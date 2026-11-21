#include <iostream>
#include <string>
using namespace std ; 
int main() {
    // Create the shoppingList array here
    string shoppingList[] = {"bread", "eggs", "milk","butter"};
    
    // Don't change the code below
    std::cout << "Shopping List:" << std::endl;
    for (int i = 0; i < std::size(shoppingList); i++) {
        std::cout << shoppingList[i] << std::endl;
    }
    return 0;
}