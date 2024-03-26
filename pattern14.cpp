#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int col =1;
         char value ='A'+n-row;   // here if i put this line under next while loop
        while(col<=row){          // then the pattern will be changed
            cout<<value;
            value++;
            col++;
        }
cout<<endl;
row++;
    
}
}