#include <iostream>
using namespace std;
int main(){
    int n ;
    cin>>n;
    int row =1;
    int value;
    while(row<=n)
    {
        int col =1;
        while(col<=row){   
            cout<<row-col+1;    // you have to bulid logic to use this euation in your code 
        col++; 
        
        
        }
        row++;
        cout<<endl;
    }}