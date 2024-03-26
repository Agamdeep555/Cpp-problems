#include <iostream>
using namespace std;

int main() {
  int n;
  int i =1;
  cin>>n;
  while(i<=n){ 
    int space=i-1;
    while (space){
      cout<<" ";
      space=space-1;
    }
    
    int col =1;
    while (col<=i){
      cout<<i;
      
    }
    cout<<endl;
    i+=1;
  }
return 0;
}