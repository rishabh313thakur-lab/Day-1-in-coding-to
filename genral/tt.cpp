#include <iostream>
using namespace std;
//to make sum from 1 to n
int main(){
   int n = 11;
   int sum = 0;
   for(int i=1;i<=n;i++){
    sum+=i;
    if(i ==5){
      break;
    }
   }
   cout<< "sum = " << sum << endl;
 return 0;
  }