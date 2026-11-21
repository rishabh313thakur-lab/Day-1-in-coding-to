#include<iostream>
using namespace std ;
 // calculation of ncr 
int binomial( int num){
    int factorial = 1;
    int n ;
for (int i = 1 ; i<= n ; i++ ){
    factorial*= i ; 
}
return factorial ;
}

int nCr(int n , int r){
int factorial_n= binomial(n) ;
int factorial_r= binomial(r);
int factorial_t= binomial(n-r);


return factorial_n / (factorial_r * factorial_t );

} 

int main(){
int n = 8 , r = 2 ; 
cout<< nCr(n , r)<<endl ; 
return 0;

}