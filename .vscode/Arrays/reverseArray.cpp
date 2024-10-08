#include <iostream>
using namespace std;

int main(){
    
    int arr1[]={1,2,3,4,5};
    int n = (sizeof(arr1)/sizeof(int));
    
    int arr2[n];
    int m=0; 
    for(int i=n-1; i>=0; i--){
        arr2[m]=arr1[i];
        cout<<arr2[m]<<" ";
        m++;
    }
    
   
    return 0;
}