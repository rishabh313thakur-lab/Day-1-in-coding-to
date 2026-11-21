#include <iostream>
#include <string>
using namespace std ; 
void printNTimes(std::string message, int n) {
    // Write you code here
    for(int i = 0 ; i<n ; i++){
        cout<<"Hello Friend!"<<endl;
    }
}

int main() {
    std::string msg;
    int n;
    std::getline(std::cin, msg); 
    std::cin >> n;
    cin>> msg  ;

    printNTimes(msg, n);
    return 0;
}