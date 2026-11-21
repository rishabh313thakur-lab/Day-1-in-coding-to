#include <iostream>
#include <vector>
using namespace std ;
// linEAR SEARCH IN VECTOR
int main() {
    int size = 7;
    int start = 0 , end = size - 1 ; 
    vector<int>vec  = {4,2,7,8,1,2,5};
while(start < end ){
swap(vec [start] , vec[end]  );
start ++ ; end-- ; 
}
for(int val : vec ){
cout<<val<< " "  ; 
}
cout<< endl ; 
return 0 ;
} 