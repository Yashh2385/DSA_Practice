// this code is basically backtracking of n to 1 ; thus it will give output as: 1 to n


#include <iostream>
using namespace std;

void printRevNo(int i, int n){
    
    if(i<1){
        return ;
    }
    else {
        
        printRevNo(i-1, n);
        cout<<i<<" ";
    }
        
    
}



int main(){

    int n;
    cout<<"Enter value of n: ";
    cin>>n;


    printRevNo(n,n);
    return 0;
}