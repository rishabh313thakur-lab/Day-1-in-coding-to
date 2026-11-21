#include <iostream>
using namespace std ;
// waf to print nth Fibonacci...(0 1 1 2 3 5 8 13 21...)
int fibonacci( int n ){
    int a = 0 , b = 1;
    for(int i = 0 ; i< n ; i++){
        cout<< a ;
         int c = a + b ;
         a= b ;
         b = c ;
    }

}    
int main () {
    cout<< fibonacci(10);
    return 0 ;
}





