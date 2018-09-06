#include<iostream>
using namespace std;
int main(){
   int n=5;
   //deciding number of rows
   for (int i=0;i<n;i++){
     //printing n-i spaces
     for(int j=0;j<(n-i);j++){
     cout<<" ";}
     //printing n stars in each row
     for (int j=0;j<n;j++){
     cout<<"*";}
   cout<<endl;}
}


