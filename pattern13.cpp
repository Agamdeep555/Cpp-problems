#include<iostream>
using namespace std;

int main() {
int n;
cin>>n;
int row =1;
while(row<=n)
{
    int col =1;
    char value;
    while(col<=n){
        
    value ='A'+row+col-2;   //  row+col-1 = 1  (according to pattern6)
                                  //   we have to signifies 1 = 'A'
                                   // so , we can do this 'A'+row+col-1 = 1+'A'
                                  // therefore   'A'+row+col-2 = 'A'
    cout<<value;
    value++;
    col++;
    }
    cout<<endl;
    row++;
}
}

//another to solev this pattern is

#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
           char value ='A'+row-1; 
        int col =1;
        // here if i put this line under next while loop
        while(col<=n){       // then the pattern will be changed
            cout<<value;
            value++;
            col++;
        }
cout<<endl;
row++;
    
}
}