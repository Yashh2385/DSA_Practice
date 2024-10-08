// this code is basically backtracking of 1 tpo n ; thus it will give output as: n to 1


#include <iostream>
using namespace std;


void fun(int n, int i=1){
    if(i >n){
        return ;
    }

    else {
        
        fun(n, i+1);
        cout<<i<<" ";
    }
}


int main(){


int n;
cout<<"Enter value of n: ";
cin>>n;

fun(n);


    return 0;
}