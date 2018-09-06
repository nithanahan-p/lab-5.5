#include<iostream>
using namespace std;
int main(){
   int n=5;
   //no. of rows to be repeated
   for(int i=0;i<n;i++){
      //printing i spaces
      for(int j=0;j<i;j++){
      cout<<" ";}
      //printing n stars in first and last row
      if(i==0||i==4){
      for(int j=0;j<n;j++){
      cout<<"*";}}

      //otherwise
      else{
      //printing stars
      cout<<"*";
      //printing n-2 spaces
      for(int j=0;j<(n-2);j++){
      cout<<" ";}
      //printing stars
      cout<<"*";}
    cout<<endl;}
}
