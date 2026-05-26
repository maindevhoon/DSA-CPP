#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int>shops(n);
    for (int i = 0; i<n; i++){
        cin >> shops[i];
    }
    sort(shops.begin(), shops.end());
    int q;
    cin >> q;
    for (int i =0; i< q; i++){
        int m;
        cin >> m;
        cout << upper_bound(shops.begin(),shops.end(),m)-shops.begin() << endl;
    }
    return 0;
}