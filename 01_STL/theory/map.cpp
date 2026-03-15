#include <bits/stdc++.h>
using namespace std;

void explainMap(){
    // internally map is RB tree
    map <int, int> m;
    // key .. value (key is unique) | value can repeat
    map <int, pair<int,int>> m1;
    // works just like set 
    // map stores unqiue keys in sorted order
    map <string,int> m2;
    m[1] = 2;
    m.emplace(4, 5);
    m.insert({4,5});
    //find lower bound upper bound erase just like set
}


void explainMultiMap(){
    multimap<int,int> m2;
    // stores multiple occurence of same key
    // only map[index] doesnt work
}

void explainUnorderedMap(){
    // unique keys but not sorted 
    // O(1) but worst case O(n)
}
