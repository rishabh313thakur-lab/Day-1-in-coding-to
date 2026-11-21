#include <iostream>
using namespace std ; 
// TO perform linear search ;
    
int linearr( int arr[] , int target , int size  ){
for( int i = 0 ; i < size ; i++ ){
if (arr[i]==target){
    return i ;
}
}
return -1 ;
}

int main (){
int arr[] = {4,2,7,8,1,2,5 };
int target = 7 ;
int size = 7 ;
cout<< " target = " << linearr(arr , target , size)<<endl;
return 0 ; 
}

