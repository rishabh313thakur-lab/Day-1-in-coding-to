#include <iostream>
#include <climits>
using namespace std ; 
// waf to print all the unique values in an array . 
int numbers( int arr[] , int size ){
for( int i = 0 ; i< size ; i++){
    if(arr[i]=arr[i])
    return i;
}
return -1 ;

}

int main(){
    int arr[] = { -1 , 3, 5,7 ,8 , 9  };
    int size = 6 ;
    numbers(arr , size);
    cout<< return i << endl ;
return 0 ; 
}
