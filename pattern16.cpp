#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row=1;
    while(row<=n){

        int stars =n-row;
        while(stars){
            cout<<"*";
            stars =stars-1;
         int col =1;
         while(col<=row)
            col++;
         }
         cout<<endl;
        row++;
        }
}