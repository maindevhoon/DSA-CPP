#include <bits/stdc++.h>
using namespace std;

void explainMemset(){
    int arr1[5];
    memset(arr1,-1,sizeof(arr1)); //-1 -1 -1 -1 -1 
    cout << sizeof(arr1) << endl; // 20 
    // works only for -1 and 0 as `memset` fills **byte by byte**, not int by int.
    // memset value = 0   → each byte = 0x00 → int = 0x00000000 = 0   ✅
    // memset value = -1  → each byte = 0xFF → int = 0xFFFFFFFF = -1  ✅
    // memset value = 5   → each byte = 0x05 → int = 0x05050505 = 84215045 ❌ not 5!


    int arr[5];
    vector<int> v;

    fill(arr, arr+5, 7);          // {7, 7, 7, 7, 7} ✅
    fill(v.begin(), v.end(), 7);  // works on vectors too ✅ memset doesn't



    int dp[100][100];
    memset(dp, 0x3f, sizeof(dp));   // ✅ fills entire 2D array with infinity(kind of) as INT_MAX doesnt work here 

    // 0x3f is roughly half of INT_MAX
    
    cout << dp[0][1];
}

int main(){
    explainMemset();
}