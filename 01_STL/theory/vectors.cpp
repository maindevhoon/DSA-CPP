#include <bits/stdc++.h>
using namespace std;


//dynamic array basically -> you can always inc size of vector

void explainVector(){
    // underlying structure is dynamic array
    vector<int> v;
    v.push_back(1); // makes and int obj 1 then moves it in v -> TC usually O(1) otherwise O(n) when capacity is doubled and new array stores values from prev array but doubling the capacity is rare so TC avgerage outs
    v.emplace_back(102); // faster than push_back as it make int 1 inside the vector

    vector<pair<int,int>> v1;
    v1.push_back({1,2});
    v1.emplace_back(1,2); 

    vector<int> v2 (5,100); // v2 (size, element_value) -> {100,100,100,100,100}

    vector<int> v3(5); // {0,0,0,0,0} | size can always be increased. 

    vector<int> v4(v3); //v3 copied to v4


    cout << v[0] << " " << v.at(0) << endl;

    vector<int>::iterator it = v.begin(); // it points at the memory address of v[0] 
    //iterator works for contiguos as well as non contiguos stored element whereas pointer works only for contiguos 
    cout << *v.begin() << " " << *it << endl; // 1 (it) | 102
    it++; // now iterator is at v[1];
    it = v.end(); // points to element after last element 1 | 102 | (it)
                                                                

    vector<int>::reverse_iterator rit = v.rend(); // point to mem before first element -> (it) | 1 | 102
    rit = v.rbegin();
    cout << *rit << "  " << *(rit+1) << endl; // 102   1

    // cout << *(rit +2) << endl; //garbage val

    auto vec_it = v.begin();

    cout << v.front() << " " << v.back() << endl; // 1 102

    vector <int> example1 = {10,20,30,40,50};
    for (auto vec_it = example1.begin(); vec_it != example1.end(); vec_it++){ 
        // vec_it is vector<int>::iterator
        cout << *(vec_it) << " ";
    }
    cout << endl;
    // 10 20 30 40 50 
    example1.erase(example1.begin()); // single element

    example1.erase(example1.begin()+2,example1.end()-1);   // [ .begin()+2, .end()-1 ) 

    for (auto vec_it: example1){ 
        // vec_it is int 
        cout << vec_it << " ";
    }
    cout << endl;
    // 20 30 50 

    //insert is costly in vector in terms of TC
    example1.insert(example1.begin(),100);
    // 100 20 30 50
    example1.insert(example1.begin()+1, 2, 99);
    // 100 90 99 20 30 50
    example1.insert(example1.begin(), v.begin(), v.end());
    // 1 102 100 99 99 20 30 50 
    example1.pop_back();
    // 1 102 100 99 99 20 30
    cout << example1.size() << endl; // 7
    example1.swap(v); // example1 -> {1, 102} v -> {1,102,100,99,99,20,30}
}