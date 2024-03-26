#include <iostream>
using namespace std;
int main()
{          //
    int n;
    cin>>n;
    int row =1;
    // while(row<=n){
    //     int col =1;
    //     while(col<=n){
    //         char ch = 'A'+col-1;
    //         cout<<ch;
    //         col++;


    //     }
    //     cout<<endl;
    //     row++;
    // }

    // int i=1;
    // char ch='A';
    // while(i<=n){
    //     int j=1;
    //     ch='A';
    //     while(j<=n){
    //         cout<<ch;
    //         ch++;
    //         j++;
    //     }
    //     i++;
    //     cout<<endl;

    // }
    char ch='A';
    for(int i=1;i<=n;i++){
        ch='A';
        for(int j=1;j<=n;j++){
            cout<<ch;
            ch++;
            
        }
        cout<<endl;
        
    }
}