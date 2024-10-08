// Print my name , n times using recurrsion

#include <iostream>
using namespace std;


void fun(int n, int i=1){
    if(i >n){
        return ;
    }

    else {
        cout<<"Yash"<<" ";
        fun(n, i+1);
    }
}


int main(){


int n;
cout<<"Enter value of n: ";
cin>>n;

fun(n);


    return 0;
}