#include <iostream>
#include <climits>
using namespace std ; 
// waf to swap the max and min number of an array . 
int numbers( int arr[] , int size ){
 int smallest = INT_MAX ;
 int largest = INT_MIN  ;  
for(int i = 0 ; i< size ; i++){
if(arr[i]<smallest){
smallest = arr[i];
}
if(arr[i]>largest ){
    largest = arr[i];
}

}
swap(largest , smallest ); 
cout<< " smallest number = " << smallest <<endl ;
cout<< "largest number = " << largest <<endl ; 
}
int main(){
    int arr[] = { -1 , 3, 5,7 ,8 , 9  };
    int size = 6 ;
    numbers(arr , size);
return 0 ; 
}
