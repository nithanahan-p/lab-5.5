#include<iostream>
using namespace std;
int main(){
   int n=5;
   //deciding the no.of rows to be repeated
   for(int i=0;i<n;i++){
      //printing i spaces
      for(int j=0;j<i;j++){
      cout<<" ";}
      //printing n stars in each row
      for(int j=0;j<n;j++){
      cout<<"*";}
    cout<<endl;}
}


