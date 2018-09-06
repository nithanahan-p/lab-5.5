#include<iostream>
using namespace std;
int main(){
   //using loop for printing patterns
   for (int i=0;i<5;i++){
     //printing 5 stars in first and last row
     if (i==0||i==4){
      for(int j=0;j<(5);j++){
      cout<<"*";}
      cout<<endl;}
     else cout<<"*   *"<<endl;}
   
}
