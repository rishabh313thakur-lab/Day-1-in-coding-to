#include <iostream>
using namespace std;
// sum of digits of number 
int sumdigit(int num) {
    int digitsum = 0;
while( num > 0){
    int lastdigit = num % 10 ;
    num = num / 10 ;
    digitsum+=lastdigit;
}
return digitsum ;
} 
int main () {
 
    cout<< sumdigit(145) << endl;

return 0;
}
