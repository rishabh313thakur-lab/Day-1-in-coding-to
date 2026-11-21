#include <iostream>
using namespace std ;
// waf to print all prime number betweeen 1 to N

// ton check number is prime or not 
bool isprime(int n){
    if(n<2)// yaha pe smj nhi aya ki agr bracket yaha pe lagte h toh kaam nhi kiya par bracket end se hta deye toh kam kar gya
        return false;
for(int i = 2; i<n; i ++){
    if(n%i==0)
    return  false;
}
 return true;
    }
   
// to print the prime number
void primenumber(int n){
   for(int i = 2; i<=n; i++){
    if(isprime(i))
        cout<< i;
    
   }
}
int main (){
primenumber(10);    
}
