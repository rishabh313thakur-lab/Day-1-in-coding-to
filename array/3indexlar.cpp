#include <iostream>
#include <climits>
using namespace std ;
// find smallest and largest in array
int main(){
int num[] = {10, 5 ,6 ,7 ,2};
int size = 5;
int miniIndex = 0 ;
int smallest = INT_MAX;
for(int i = 0 ; i<size ; i++){
    if(num[i] < smallest){
        smallest = num[i];
        miniIndex = i ;
    }
}
cout<<"smallest = " << smallest <<endl;
cout<<" index = " << miniIndex <<endl;
    return  0;
}

