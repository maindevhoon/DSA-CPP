// pick or not pick (using true false condn to give only 1 ans)


#include <bits/stdc++.h>
using namespace std;


//using bool we can stop at first sub set which satisfies the condition 

// just remove true condition and it will print all subsets

bool func(int arr[],vector<int>ans, int n, int idx, int s, int sum){
    if(idx >=n){
        if(s == sum){
            for(auto x: ans){
                cout << x << " ";
            }
            cout << endl;
            return true;
        }
        else{
            return false;
        }
    }


    // pick
    s += arr[idx];
    ans.push_back(arr[idx]);
    if(func(arr, ans, n, idx+1 ,s ,sum)== true){
        return true;
    }

    // backtrack
    s -= arr[idx];
    ans.pop_back();

    // not pick
    if(func(arr, ans, n, idx+1, s, sum) == true){
        return true;
    }
    return false;
}


// given an array give the sub array which satisfies = sum condn
int func2(int arr[], int n, int idx, int s, int sum){
    if(idx >=n){
        if(s == sum){
            return 1;
        }
        else{
            return 0;
        }
    }


    // pick
    s += arr[idx];
    int l = func2(arr, n, idx+1 ,s ,sum);

    // backtrack
    s -= arr[idx];

    // not pick
    int r = func2(arr, n, idx+1, s, sum);
    return l + r;
}


int main(){
    int arr[] = {1,2,1};
    vector<int> v;
    func(arr, v, 3, 0,0,2);
    cout << func2(arr, 3, 0,0,2);
}

