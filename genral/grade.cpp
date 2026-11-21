#include<iostream>
using namespace std ;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          
// to make a grade  system 
int main(){
int n;
cout<<"ENTER n"<<endl;
cin>> n;
if( n>=90 ){
cout<<"STUDENT GET GRADE 'A++' "; 
}
else if(n>=n<90) {
    cout<<"STUDENT GET GRADE 'A+'";
}
else if(n>=70 &&n<80){
    cout<<"STUDENT GET GRADE 'A'";
}
else if(n>60 && n<80) {
    cout<<"STUDENT GET GRADE 'B'";
}
else{
    cout<<"STUDENT GET GRADE 'C'";
}
return 0;
}
