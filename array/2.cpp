#include <iostream>
#include <climits>
using namespace std ;
// find smallest and largest in array
int main(){
int num[] = {10, 5 ,6 ,7 ,0};
int size = 5;
int smallest = INT_MAX;
for(int i = 0 ; i<size ; i++){
    if(num[i] < smallest){
        smallest = num[i];
    }
}
cout<<"smallest = " << smallest <<endl;
    return 0 ;
}

