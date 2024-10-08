#include <iostream>
using namespace std;


void lexo(int i, int n){
    if(i>n)return;
    
    cout << i <<" ";

        for(int j=0; j<=9; j++){
            if(10*i+j>n) return;
            else lexo(10*i+j,n);
        }
    
}

int main(){
    int n;
    cout<<"Enter value of n: ";
    cin>>n;
    
    
    for(int i=1; i<=9; i++){
         lexo(i,n);
    }
    
   return 0;
}