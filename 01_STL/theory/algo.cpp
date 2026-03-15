#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int,int>p1, pair<int,int>p2){
        if (p1.second<p2.second) return true;
        if (p1.second>p2.second) return false;
        if (p1.second == p2.second){
            if (p1.first>=p2.first) return true;
        }
        return false;
    }

void explainSort(){
    vector <int> v;
    sort(v.begin(),v.end()); //sorts all the elements

    sort(v.begin(),v.end(),greater<int>()); // sorts in desc order
    // greater<int> is a struct use () after it to create an object then pass it in sort()

    // you can also sort using your own defination
    // but you would need a comparator function

    
    // this comp allows us to sort .second in asc and if .second is same then use .first in desc to sort

    sort(v.begin(),v.end(),comp);
}

void explainBinary(){

    int num = 7;
    int cnt = __builtin_popcount(num); //returns number of 1s i.e. (set bits) in binary of 7 
    int num = 7; // binary: 0111

    __builtin_popcount(num);   // 3 → counts set bits (1s)
    __builtin_parity(num);     // 1 → 1 if odd number of set bits, 0 if even
    __builtin_clz(num);        // 29 → count leading zeros  (from MSB)
    __builtin_ctz(num);        // 0  → count trailing zeros (from LSB)
    

    //there are 32 bits for int

    string s = "123";
    //next permutations in dictionary order
    do {
        cout << s << endl;

    } while (next_permutation(s.begin(),s.end()));  
    //  123 132 ... .. .. 312 321 null

    // for a random number like 231 first sort it to 123 to get all permutations otherwise permutation will start from 231

}

void explainMaxElement(){
    vector<int> v {1,23,45,5};
    int maxI = *max_element(v.begin(), v.end());
    //similarly min_element

}