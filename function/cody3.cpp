#include <iostream>
using namespace std;
int sigma(int n) {
    // Write your code below
    int sum = 0 ; 
    for(int i = 0 ; i<=n ; i++ ){
sum= sum + i ;

    }
    return sum ;
}

int main() {
    int n;
    std::cin >> n;
    int res = sigma(n);
    std::cout << res;
    return 0;
}