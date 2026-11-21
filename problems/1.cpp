#include <iostream>
using namespace std ;
// to print subarray  
int main(){
    int n = 5;
   int arr[] = {4,2,3,1,5};
for(int start = 0 ; start<n ; start ++ ){
    for( int end = start ; end< n ; end ++){
        for(int i= start ; i<=end ; i++ ){
cout<< arr[i]; 
        }
        cout<< " " ; 
    }
    cout<< endl ; 
}



    return 0 ; 
}