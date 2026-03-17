//find second largest element in array without sorting

#include <bits/stdc++.h>
using namespace std;

int main(){
    // O(n)
    int arr[] = {1,7,7,7,7,7};
    int l = arr[0];
    int sl = INT_MIN;
    for(int i = 0; i<(sizeof(arr)/sizeof(arr[0])); i++){
        if (arr[i]>l){
            sl = l;
            l = arr[i];
        }
        if (arr[i]<l && arr[i]>sl){
            sl = arr[i];
        }
    }
    cout << sl << endl;
}
// approach 2 : O(2n)
// in first pass find the largest element
// in 2nd pass compare each element to be greater than -1 or INT_MIN and less than largest
