#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i =2;
    while (i<n)
     {
     if (n%i==0)            // here for 458 and 459 there is a error , it is showing wrong thing 
    cout<<" prime";
    else
    cout<<" not prime";
    i++;
     }

    

    

}
