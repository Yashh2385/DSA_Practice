// recursion in reverse  of n ; inshort n to 1

#include <iostream>
using namespace std;

void printRevNo(int i, int n){
    
    if(i<1){
        return ;
    }
    else {
        cout<<i<<" ";
        printRevNo(i-1, n);
    }
        
    
}



int main(){

    int n;
    cout<<"Enter value of n: ";
    cin>>n;


    printRevNo(n,n);
    return 0;
}