#include <iostream>
using namespace std;

int main() {
    int n = 4; // Height of the upper wings
    char ch = 'A';
    for (int i = 0; i < n; i++) {
        // upper part of butter fly....
        // Left Wing
        for (int j = 0; j <= i; j++) {
            cout << "A";
        }
        
        // Middle Spaces
        for (int j = 0; j < 2 * (n - i - 1); j++) {
            cout << " ";
        }
        
        // Right Wing
        for (int j = 0; j <= i; j++) {
            cout << "A";
        }
        
        cout << endl;
    }
// bottom part of the butterfly...

// left part
for(int i = 0 ; i < n ; i++){
    for(int j = 0 ; j < n-i ; j++){
        cout<< "A" ;
    }
    //middle  part 
    for(int j = 0 ; j < 2*i ; j++ ){
    cout<<" ";

}
// right part 
for(int j = 0 ; j < n-i ; j++){
        cout<< "A" ;
    }
    cout<< endl ; 

}
    
    return 0;
}
