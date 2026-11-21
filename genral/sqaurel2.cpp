#include <iostream>
using namespace std;
// sqaure pattern 2 
int main(){
int n = 3;

int  num = 1 ;

for( int i= 0 ; i < n; i++ ){
 for(int j = 0 ; j < n ; j ++){
cout<< num <<" ";
num++ ;
} 
cout << endl;
}
// after pattern [num value] = 10 
cout << "after pattern " << num << endl ;
return 0 ;
}