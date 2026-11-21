#include <iostream>
using namespace std ; 
// decimal to binary 
int main(){
    int decnum = 7;
    int ans = 0; // binary number
int power = 1 ;
while( decnum > 0){
  int rem = decnum%2;
    int decnum = decnum/2;
    ans+= (rem * power);
    power = power * 10;

}

return  ans ;
}