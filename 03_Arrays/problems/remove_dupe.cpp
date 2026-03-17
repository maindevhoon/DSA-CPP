// remove duplicate elements from a sorted array then return the number of unique elements

#include <bits/stdc++.h>
using namespace std;

void optimal (int arr[], int n){
    //2 pointer
    int i1 = 0;
    for (int i2 = i1+1; i2< n; i2++){
        if(arr[i2] != arr[i1]){
            arr[++i1] = arr[i2];
        } 
    }
    cout << i1+1 << endl;
}
int main(){
    int arr[] = {1,1,2,2,2,3,3};
    int arr2[] = {1,1,2,2,2,3,3};
    //brute force -> use a set
    set<int>s;
    // nlogn
    for (auto x: arr){
        s.insert(x);
    }   
    int i =0;
    // n
    for (auto it = s.begin(); it != s.end(); it++, i++){
        arr[i] = *(it);
    }
    cout << i << endl;
    optimal(arr2,7);
    for (auto x: arr2){
        cout << x << " "; 
    }
    cout << endl;

    // overall TC: O(nlogn) and SC: O(n)

}