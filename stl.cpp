// Pairs

#include <bits/stdc++.h>
using namespace std;

void explainPairs() {
    pair<int, int> p = {1, 5};
    cout << p.first << " " << p.second << endl;

    // Nested pairs: elements: 4, 8, 16, 12, 5 : if we want to take more than 2 elements
    pair<int, pair<int, pair<int, pair<int, int>>>> numbs = {4, {8, {16, {12, 5}}}};

    // Accessing the nested elements
    cout << numbs.first << " " 
         << numbs.second.first << " " 
         << numbs.second.second.first << " " 
         << numbs.second.second.second.first << " " 
         << numbs.second.second.second.second << " : Hurrey!! I am right !!!!" << endl;

    

    // as a array

    pair<int, int> arr[] ={ {1,3}, {1,5}, {4,6}, {3,6}};
    cout<< arr[2].first;

}

int main(){

    explainPairs();


    return 0;
}

