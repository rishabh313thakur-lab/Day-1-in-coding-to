#include <iostream>
using namespace std ; 
// waf to calculate sum and product of all numbers in array . 
int calculate( int arr[] , int size ){
int sum = 0 ; 
int product = 1 ;
for(int i = 0 ; i < size ; i++){
sum = sum + arr[i] ;
product = product * arr[i] ; 
}

cout<< "sum of product = " << sum << endl ; 
cout<< "product of number = " << product << endl ;  
}
int main(){
    int arr[] = { 2 , 3, 5,7 ,8 , 9  };
    int size = 6 ;
calculate( arr , size );
return 0 ; 
}