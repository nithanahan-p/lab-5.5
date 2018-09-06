#include<iostream> 
using namespace std;
int main(){ 
    int n;
    n=5;

    //deciding no. of rows
    for(int i=0;i<n;i++){
       //printing n-i spaces
       for(int j=0;j<(n-i);j++){
       cout<<" ";}
       //printing 2i+1 in each row
       for(int j=0;j<((2*i)+1);j++){
      cout<<"*";} 
      cout<<endl;}
return 0;   
}
       
           

    
     
          

