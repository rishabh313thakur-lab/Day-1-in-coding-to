#include <iostream>
#include <string>
using namespace std ;
void stringOperations(std::string str) {
    // 1. Print length of the string
cout<<"Length: "<< str.length()<<endl ;
    // 2. Append " - Modified" to the string

cout<<"Append: " << str.append("- Modified ")<< endl ;
    // 3. Insert "C++ " at the beginning
cout<<"Insert: " << str.insert(0, " C++")<< endl ;
    // 4. Extract substring of length 5 starting at position 5
cout<<"Extract: " << str.substr(5, 50<<endl ;
    // 5. Replace substring at position 5 with "Awesome"
    cout<<"Replace: " << str.replace(5, 5, "IAwesome")<<endl; 
}

int main() {
    std::string str;
    std::getline(std::cin, str);
    stringOperations(str);
    return 0;
}