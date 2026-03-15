#include <bits/stdc++.h>
using namespace std;
void explainList(){
    list <int> ls;
    ls.push_back(1);
    ls.emplace_back(2);
    ls.push_front(43); // much cheaper in terms of TC than insert for vector as a doubly linked list is internally used in list
    // Vector is stored in contiguous memory, so inserting at the front means shifting every element one step to the right -> O(n)
    // thats why no emplace_front in vector is provided 
    ls.emplace_front(12); // O(1)

    // rest functions same as vector
    // begin end rbegin rend clear insert size swap
}
