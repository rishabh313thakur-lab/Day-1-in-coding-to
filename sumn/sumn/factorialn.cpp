#include <iostream> 
using namespace std ;
// to make n!
int main (){
int n = 3;
int fact=1;
for(int i=1;i<=n;i++){
fact *=i;
}


cout<<fact<<endl;
    return 0 ;
}
