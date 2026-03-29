// Given a lock made up of N different circular rings. Each ring has 0-9 digit printed on it. There is only one particular code which can open the lock. You can rotate each ring any number of times in either direction. Given the random sequence R and the desired sequence D, find the minimum number of rotations required to open the lock. 

#include <bits/stdc++.h>
using namespace std;

int rotationCount(long long R, long long D){
        string r = to_string(R);
        string d = to_string(D);
        int n = max(r.size(),d.size());
        while(r.size()<n) r= "0" +r;
        while(d.size()<n) d= "0" +d;
        cout << r.size() << endl;
        int total = 0;
        for(int i=0; i<r.size(); i++){
            int max_shift = abs(r[i]-d[i]);
            total += min(max_shift, 10-max_shift);
            
        }
        return total;
}