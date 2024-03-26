#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int col =1;
        while(col<=row){
            char value;
            value = 'A'+row-1;
            cout<<value;
            col++;
        }
cout<<endl;
row++;
    
}
}