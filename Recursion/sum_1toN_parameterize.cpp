#include <iostream>
using namespace std;

void funsum(int i, int sum){
    
    if(i<1){
        cout<<sum;
        return ;
    }
    else 
    {
        funsum(i-1,sum+i);
    }
    
}

int main(){
    
    int n;
    cout<<"Enter value of n: ";
    cin>>n;
    
    funsum(n,0);
    
    
    
   return 0; 
}
