#include <iostream>
using namespace std ;
// check it prime or not
int main () {
bool prime = true;
int n = 6;
// for (int i=2;i<=n-1; i++){
//     if(i%2==0){
//         prime= false;
//        break; 
//     } 
// }
for(int i=2; i*i<=n; ){
    if(i%2==0){
        prime= false;
       break;
    }
} 

if(prime == true){
    cout << " prime number";
} else {
    cout<< " non prime ";
}
 return 0;   
} 