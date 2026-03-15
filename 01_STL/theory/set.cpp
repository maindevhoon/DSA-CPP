#include <bits/stdc++.h>
using namespace std;

void explainSet(){
    set<int> s;
    // store uniquely in a sorted order
    // that is only 1 occurence of each element
    //everything happens in log(n) time -> insertion erasing etc

    s.insert(1); // 1
    s.emplace(2); // 1 2
    s.insert(2); // 1 2
    s.insert(0); // 0 1 2

    auto it = s.find(2); // return iterator at s.end()-1
    cout << *it << endl;
    cout << *prev(next(prev(it))); // *(it+1) doesnt work as set::iterator is biderectional use -> *next(it)
    it = s.find(6); // if elem not in set return s.end()
    s.erase(5); // .erase(elem) or .erase(iterator)
    int count = s.count(1);
    auto it1 = s.find(2);
    auto it2 = s.find(5);
    s.erase(it1, it2); // [ it1, it2 )
    //there are other functions similar to vector as well


    auto it4 = s.lower_bound(2); //Returns an iterator to the first element ≥ 2
    auto it5 = s.upper_bound(5); // Returns an iterator to the first element > 5
    

    // when is this bound used ??
    // Count elements in range [l, r]
    auto l = s.lower_bound(3);
    auto r = s.upper_bound(7);

    for (auto it = l; it != r; ++it)
        cout << *it << " ";  // prints element betwenn 3 and 7
    
}

void explainMultiSet(){
    // everything same as set
    //only stores duplicate elements also

    multiset<int> ms;
    ms.insert(2); // 2
    ms.emplace(5); // 2 5
    ms.insert(2); //  2 2 5
    
    ms.erase(2); // 5

    ms.insert(2); //  2 5
    ms.insert(2); //  2 2 5

    ms.erase(ms.find(2)); // only first 2 is deleted

    ms.insert(7);

    ms.erase(ms.find(5), next(ms.find(5)));


}

void explainSet(){
    unordered_set<int>st;
    // everything similar to set except the order to store to elements -> randomized order using hash function
    // all operations except lower and upper bound work
    // all operation take O(1) rarely the worst case is O(n)
}





int main(){
    explainSet();
    explainMultiSet();
}