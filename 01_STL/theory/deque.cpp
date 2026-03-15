#include <bits/stdc++.h>
using namespace std;

void explainDeque(){
    // finds chunks of memory and then keeps a map of pointers to these chunks
    // each pointer leads to a chunk ptr1 -> [][][][][]
    // ptr2 -> [][][][][]
    // chunk size here is 5 although it is calc using a formula at compile time based on size of element;
    //in comparison to list allocation of memory is quicker (it seems it should not be as we have to find chunks of mem but OS handles it )
    // and since fewer calls to allocate memory is required so 
    // allocation is faster than doubly linked list | list 
         
    deque<int> dq;
    dq.push_back(1); // {1}
    dq.emplace_back(2); // {1,2}
    dq.push_front(4); // {4,1,2}
    dq.emplace_front(5); // {5,4,1,2}

    dq.pop_back(); // {5,4,1}
    dq.pop_front(); // {4,1}

    cout << dq.back() << endl;
    cout << dq.front() << endl;

    //list doesnt have index deque has index

    // what list has and deque doesn't
    // l.sort()          // list has its own sort
    // l.reverse()       // built in reverse
    // l.merge()         // merge two sorted lists
    // l.splice()        // move elements from one list to another
    // l.remove(val)     // remove all elements with value
    // l.unique()        // remove consecutive duplicates


}
