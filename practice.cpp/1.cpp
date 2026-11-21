#include <iostream>
using namespace std;
int main() {
    for (int i = 1; i <= 20; i++) {
        std::cout << i << std::endl;
        if(i>=15 && i<=20 ){
            break;

        }
    }
    return 0;
}