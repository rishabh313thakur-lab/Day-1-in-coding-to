#include <iostream>
using namespace std;
// triangle pattern 
int main(){
int n = 4 ;
for(int i = 0 ; i<n ; i++){
    for(int j = i+1 ;j>0  ; j++){
    cout<<n<<" ";
    n+1;
}
    cout<<endl;
}



    return 0 ;
}
