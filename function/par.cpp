#include <iostream>
using namespace std ;

void printsum( int n ){
    int sum = 0 ;
for( int i = 1; i<=1000 ; i++ ){
sum = sum + i ;
}
cout << sum << endl ; 
}
int main (){
int n ; 
cin >> n ; 
for(int i = 0 ; i<n ; i++){
    printsum(n);

}
return 0 ;
}