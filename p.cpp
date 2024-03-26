 #include <iostream>
 using namespace std;
// int main(){
//     int n ,i,j;
//     cin>>n;
//     for(int i=1 ; i<=n ; i++){
//         for( int j=1 ; j<=i; j++){
//             cout<<" ";
//         }
//         cout<<"*"<<endl;
//     }

// return 0;
   
// }

int main(){
    int n,x,y;
    int i =1;
    cin>>n;
    while(i<=n){
        int j=1;
        while(j<=i){
            while(x=n-i+1){
            cout<<"*";
            }
            j++;
            while(y=i-1){
                cout<<" ";
            }
        }
        cout<<endl;
        i++;  
    }
    return 0;
}
