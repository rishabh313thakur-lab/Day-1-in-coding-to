#include <iostream>
using namespace std;
// calculate n factorial
int factN(int n){
    int fact = 1;
for(int i = 1 ; i<=n ; i++){
fact*=i;// fact = fact * i
}
return fact ;
}
int main () {
 
    cout<< factN(5) << endl;

return 0;
}
