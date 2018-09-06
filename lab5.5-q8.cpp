#include<iostream>
using namespace std;
int main(){ 
   int n=5;
   //deciding how many rows to be repeated
   for(int i=0;i<n;i++){
      //printing i+1 stars in each row
      for(int j=0;j<(i+1);j++){
      cout<<"*";}
      //printing n-(i+1) spaces in each row
      for(int j=0;j<(n-(i+1));j++){
      cout<<" ";}
    cout<<endl;}
return 0;
}   


