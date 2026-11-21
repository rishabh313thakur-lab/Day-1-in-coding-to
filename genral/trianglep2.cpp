#include <iostream>
using namespace std ;
// square pattern for  number ef like 1 2 3 4 etc....
int main(){
   int n = 4;   
for( int i = 0;i<n ;i++ ){
for(int j = 0;  j < i + 1 ; j++){
    cout<< i + 1 ;
}
cout<< endl ;
}

return 0 ;
}