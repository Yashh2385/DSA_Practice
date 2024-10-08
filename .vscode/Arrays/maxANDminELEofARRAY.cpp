#include<bits/stdc++.h>
using namespace std;

int setmini(int a[], int n){
    
    int mini = INT_MAX;
    for(int i=0; i<=n-1; i++){
        if(a[i] < mini ){
            mini = a[i];
        }
    }
    
    return mini;
    
    
}



int setmaxi (int a[], int n){
    
    int maxi = INT_MIN;
    for(int i=0; i<=n-1; i++){
        if(a[i]> maxi){
            maxi = a[i];
            
        }
    }
    
    return maxi;
    
}



int main(){
    int arr[]={4,8,6,4,9,15,3,1,2};
    int n = sizeof(arr)/sizeof(int);
    
    
    cout<< "Maximun elemnent of an array is: "<< setmaxi(arr,n)<<endl;
    
    cout<<"Min: "<<setmini(arr,n)<<endl;
    
    return 0;
}