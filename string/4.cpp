#include <iostream>
#include <cstring>
using namespace std ; 
void printStringInfo(char str[]) {
    // Print the string
cout<< "string: "<<str<<endl ;
    // Print the length of the string
    cout<<"Length: "<<strlen(str)<<endl ;

    // Print the character at index 4
    str[4]=0;
cout<<"Character at index 4: "<< str[4] << endl  ;
    // Modify the first character to 'X'
    str[0]='x' ;

    // Print the modified string
   cout << "Modified first character: " << str << endl;
}

int main() {
   
    char message[] = "Hello, World!";

    printStringInfo(message);

    return 0;
}