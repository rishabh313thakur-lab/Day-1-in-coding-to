#include <iostream>
using namespace std ;
//sum of all numbers from 1 to n  which are divisible by 3
int main(){
    int n = 10;
    int sum = 0;
    for(int i=1; i<=n;i++){
        if(i % 3==0){
            sum +=i;
        }

    }
    cout<<"sum";
return 0;
}