#include <iostream>
using namespace std;
int main(){
    int n ;
    cin>>n;
    int row =1;
    while(row<=n)
    {
        int col =1;
        while(col<=row){           // here the error is that i am doing col<=n insted of doing this
            cout<<row<<" ";
            col++;
        
        
        }
        row++;
        cout<<endl;
    }


}
