// largest element in an array

// go for brute soln first -> better soln -> optimal soln

#include <bits/stdc++.h>
using namespace std;


void largest_element(){
    int arr[] = {3,2,1,5,2};
    int arr1[] = {3,2,1,5,2};
    //brute -> sort and give last element 
    int* p1 = &arr[0];
    int* p2 = &arr[sizeof(arr)/sizeof(arr[0])];
    sort(p1, p2);
    cout << *(p2-1) << endl;
    // TC -> O(nlog(n))

    //optimal O(n)
    int largest = arr1[0];
    for (int i = 0; i<(sizeof(arr)/sizeof(arr[0])); i++){
        if (arr1[i]>largest){
            largest = arr1[i];
        }
    }
    cout << largest << endl;
}
