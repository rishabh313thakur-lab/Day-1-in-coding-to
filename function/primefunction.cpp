#include <iostream>
using namespace std ;
// waf to check if a number is  prime or not
bool isprime(int n){
   if( n <2 ){
      return false ;
   for(int i = 2 ; i*i<=n ; i++ ){
if(n%i==0){
   return false;
   }
   }
}
 return true;
}
int main(){
   cout<<isprime(1)<<endl;
   return 0;
}
