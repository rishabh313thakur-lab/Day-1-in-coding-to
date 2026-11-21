#include <iostream>
#include <climits>
using namespace std ;
// find smallest and largest in array
int main(){
int num[] = {10, 5 ,6 ,7 ,0};
int size = 5;
int smallest = INT_MAX;
int largest = INT_MIN;
for(int i = 0 ; i<size ; i++){
    if(num[i] < smallest){
        smallest = num[i];
    }
    // if(num[i]>largest){
    //     largest = num[i];
    // }
    largest=max(num[i], largest);
} 
cout<<"smallest = " << smallest <<endl;
cout<<"largest = " << largest <<endl;
    return 0 ;
}

