#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string intToRoman(int num) {
        vector <pair<int,string>> d = {{1000,"M"},{900,"CM"},{500,"D"},{400,"CD"},{100,"C"},{90,"XC"},{50,"L"},{40,"XL"},{10,"X"},{9,"IX"},{5,"V"},{4,"IV"},{1,"I"}};
        string s = "";
        for (int i = 0; i<d.size(); i){
            if ((num/d[i].first) >0){

                num -= d[i].first;
                s += d[i].second;
                continue;
            }
            i++;
        }
        return s;
    }
};