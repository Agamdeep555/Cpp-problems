#include <iostream>
using namespace std;
int main(){
    int n ;
    cin>>n;
    int row =1;
    int count =0;
    while(row<=n)
    {
        int col =1;
        while(col<=row){      
        count = count+1 ;
            cout<<count<<" ";
            col++;
        
        
        }
        row++;
        cout<<endl;
    }


}
