#include <bits/stdc++.h>
using namespace std;

// pairs is a part of utility library

void explainPairs(){
    pair<int,int> p = {1,3}; // {} encloses everything inside it to a variable
    cout << p.first << " " << p.second << endl;

    //  nested property of pair

    pair <int, pair<int,int>> p1 = {1,{2,3}};

    cout << p1.first << " " << p1.second.first << endl;

    // same can be done using tuple 
    tuple<int,int,string> t = {1,2,"hi"};

    // this is the way to print elements in tuple 
    // we can't use for loop as get already has return type specified at compile time
    cout << get<0>(t) << " "; 
    cout << get<1>(t) << " ";
    cout << get<2>(t) << endl;

    // declaring an array that stores pair values
    pair <int, int> arr[] = {{1,2},{6,3}};
    cout << arr[1].second << endl;
}