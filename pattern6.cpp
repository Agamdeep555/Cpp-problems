#include <iostream>
using namespace std;
int main(){
    int n ;
    cin>>n;
    int row =1;
    while(row<=n)
    {
        int col =1;
        int value =row;
        while(col<=row){
            cout<<value;
            value++;       //we can also use any other method , instead of using value func
            col++;        //  cout<<row+col-1;
        }
         cout<<endl;
        row++;
        }
    }
