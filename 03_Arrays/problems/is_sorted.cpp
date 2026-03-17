//given an array check if it is sorted
#include <bits/stdc++.h>
using namespace std;

bool is_sorted(int arr[], int n){
    int idx = 1;
    while(idx < n){
        
        if(arr[idx]<arr[idx-1]){
            return false;
        }
        
        idx++;
    }
    return true;
}

int main(){
    int arr[] = {1,3,4,6,7};
    cout << is_sorted(arr, 5);
}