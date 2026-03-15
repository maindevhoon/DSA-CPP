#include <bits/stdc++.h>
using namespace std;

// ==================== 1D ARRAY ====================
void explain1DArray(){

    // --- Declaration & Initialization ---
    int arr1[5];                            // uninitialized -> garbage values
    int arr2[5] = {1, 2, 3, 4, 5};         // fully initialized
    int arr3[5] = {1, 2};                   // {1, 2, 0, 0, 0} -> rest are 0
    int arr4[5] = {0};                      // {0, 0, 0, 0, 0}
    int arr5[] = {1, 2, 3};                 // size auto-deduced = 3

    // --- Accessing ---
    int arr[5] = {10, 20, 30, 40, 50};
    cout << arr[0] << endl;                 // 10
    cout << arr[4] << endl;                 // 50
    // cout << arr[5];                      // ❌ out of bounds -> UB, no error thrown

    // --- Traversal ---
    for (int i = 0; i < 5; i++)
        cout << arr[i] << " ";
    cout << endl;

    for (int x : arr)                       // range-based for loop
        cout << x << " ";
    cout << endl;

    // --- Useful Operations ---
    int arr6[5] = {3, 1, 4, 1, 5};

    sort(arr6, arr6 + 5);                              // sort ascending
    sort(arr6, arr6 + 5, greater<int>());              // sort descending

    int mx  = *max_element(arr6, arr6 + 5);            // max element
    int mn  = *min_element(arr6, arr6 + 5);            // min element
    int idx = find(arr6, arr6 + 5, 4) - arr6;         // index of element 4

    // --- memset (only reliable for 0, -1, 0x3f) ---
    memset(arr6,    0, sizeof(arr6));       // {0, 0, 0, 0, 0}
    memset(arr6,   -1, sizeof(arr6));       // {-1,-1,-1,-1,-1}
    memset(arr6, 0x3f, sizeof(arr6));       // {0x3f3f3f3f,...} -> "infinity" in CP

    // sizeof(arr) = num_elements x bytes_per_element
    // int arr[5] -> sizeof = 5 x 4 = 20 bytes
    // always use sizeof(arr), never hardcode bytes

    // why not INT_MAX with memset?
    // memset fills byte by byte
    // 0    -> 0x00 -> int = 0x00000000 = 0          ✅
    // -1   -> 0xFF -> int = 0xFFFFFFFF = -1         ✅
    // 0x3f -> 0x3f -> int = 0x3f3f3f3f = 1061109567 ✅ (safe to add, no overflow)
    // 5    -> 0x05 -> int = 0x05050505 = 84215045   ❌ not 5

    // --- fill (use for any other value) ---
    fill(arr6, arr6 + 5, 7);               // {7, 7, 7, 7, 7} ✅
}

// ==================== 2D ARRAY ====================
void explain2DArray(){

    // --- Declaration & Initialization ---
    int dp[3][4];                           // uninitialized -> garbage values
    int dp2[3][4] = {{1, 2,  3,  4},
                     {5, 6,  7,  8},
                     {9, 10, 11, 12}};

    // --- Accessing ---
    cout << dp2[1][2] << endl;              // 7  (row 1, col 2)

    // --- Traversal ---
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 4; j++)
            cout << dp2[i][j] << " ";
    cout << endl;

    // --- memset on 2D ---
    // 2D arrays are contiguous in memory -> memset works perfectly
    // layout: dp[0][0], dp[0][1]...dp[0][3], dp[1][0]...dp[2][3] -> flat block
    // sizeof(dp) = 3 x 4 x 4 = 48 bytes -> captures entire array in one shot
    memset(dp,    0, sizeof(dp));           // all 0
    memset(dp,   -1, sizeof(dp));           // all -1
    memset(dp, 0x3f, sizeof(dp));           // all "infinity"
}

// ==================== PASSING ARRAY TO FUNCTION ====================
// array decays to a pointer when passed to a function
// sizeof(arr) inside function gives pointer size, NOT array size
// always pass size separately

void printArray(int arr[], int n){
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// ==================== GLOBAL ARRAY ====================
// declared outside main -> zero-initialized automatically (no memset needed)
// also avoids stack overflow for large sizes
int globalDp[1000][1000];                  // ✅ all 0s, safe for large sizes

int main(){
    explain1DArray();
    explain2DArray();

    int arr[5] = {1, 2, 3, 4, 5};
    printArray(arr, 5);

    // ❌ large local array -> stack overflow risk
    // int localDp[1000][1000];

    // ✅ always declare large arrays globally
    // globalDp is already available and zero-initialized

    return 0;
}