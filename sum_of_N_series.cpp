#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i =1;
    int sum = 0;
    // while (i<=n)
    // {cout<<sum<<endl;         // i have not put i++ in my code 
    // sum =sum+i; 
    // i++;  }  
    // cout<<sum<<endl;  // thats why my code is not working and goes into infinite loop

 while(i<=n){
    
    sum=sum+i;                       // nikhil's code
    i=i+1;}

 cout<<sum<<endl;



//we can also do like this with the help of 
// the formula of sequence series


// to find sum of n series by formula

    // sum = n*n+n;
    // sum= sum/2;
    // cout<<sum<<endl;                 
                
