#include <iostream>
using namespace std;


int f(int n){
    if(n==0){
        return 1;
    }
    else 
    {
        return n * f(n-1);
    }

}
int main(){
    
    int n;
    cout<<"Enter value of n: ";
    cin>>n;
    
    f(n);
    cout<< f(n);
    
    return 0;
}