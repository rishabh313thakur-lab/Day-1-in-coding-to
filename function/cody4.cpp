#include <iostream>
#include <string>
using namespace std ;
bool is_valid(std::string username, std::string password) {
    // Write your code below
  //  if(user  = qwerty)
    cout<< true ;
    else false;
}

int main() {
    std::string user, pass;
    std::cin >> user;
    std::cin >> pass;
    //bool res = is_valid(user, pass);
    std::cout << (res ? "true" : "false");
    return 0;
}