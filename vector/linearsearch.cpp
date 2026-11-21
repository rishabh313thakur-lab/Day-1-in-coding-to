#include <iostream>
#include <vector>
using namespace std ;
// linEAR SEARCH IN VECTOR
int main() {
    int target ;
    cout<< "enter a target" << endl ;
    cin>>target; 
    bool found = false ; 
vector <int> vec = {4,2,7,8,1,2,5};
for(int val : vec  ){
if(val == target){
    cout<<"found = " <<val<< endl ; 
    found = true ;
    break ; 
}
}
if(!found){
    cout<< "not found" << endl ; 
} 
return 0 ;
} 