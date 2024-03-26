#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i =1;
while (i<=n)  {
    int j=1;                           // samaj nahi aaya bilkul bhe 
 while(j<=n){
    cout<<i;   // differnce in this line only , bcz star is changed with i          
    j=j+1;       // else everything is same as pattern 1 
 }
    cout<<endl;
    i=i+1;
    
}
}