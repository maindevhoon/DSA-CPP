#include <bits/stdc++.h>
using namespace std;

int f1(){
    // 4
    // * * * * 
    // * * * * 
    // * * * * 
    // * * * * 
    int n; 
    cin >> n;
    for (int i = 0; i<n; i++){
        for (int j= 0; j<n; j++){
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}



int f2(){
    // 5
    // * 
    // * * 
    // * * * 
    // * * * * 
    // * * * * * 
    int n; 
    cin >> n;
    for ( int i = 0; i<n; i++){
        for (int j = 0; j< i+1; j++){
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}

int f3(){
    // 5
    // * * * * * 
    // * * * * 
    // * * * 
    // * * 
    // * 
    int n; 
    cin >> n;
    for ( int i = 0; i<n; i++){
        for (int j = n; j>i; j--){
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}

int f4(){
    //     5
//     *    
//    ***   
//   *****  
//  ******* 
// *********
    int n; 
    cin >> n;
    for ( int i = 0 ; i < n; i++){
        for ( int j = 0; j < n-i-1 ; j++){
            cout << " ";
        }
        for (int j = 0; j< 2*i+1; j++){
            cout << "*";
        }
        for ( int j = 0; j < n-i-1; j++){
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}

int f5(){
    int n;
    cin >> n;
    for (int i = 0; i< n; i++){
            if(i%2==1){
                for (int j = 0;j<i+1; j++){
                    cout << j%2 << " ";
                }
            }
            else{
                for (int j = 1; j< i+2; j++){
                cout << j%2 << " "; 
            }
            }
            cout << endl;
    }
    return 0;
}

int f6(){
//     5
// 1        1
// 12      21
// 123    321
// 1234  4321
// 1234554321
    int n;
    cin >> n;
    for (int  i = 0; i< n; i++){
        for ( int j = 0 ; j < 2*n; j++){
            if(j<=i){
                cout << j+1;

            }
            else{
                if(2*n-j<=i+1){
                    cout << 2*n-j;
                }
                else{
                    cout << " ";
                }
            }
            

        }
        cout << endl;
    }
    return 0;
}

int f7(){
    //5
    // A
    // AB
    // ABC
    // ABCD
    // ABCDE
    int n;
    cin >> n;
    for (int i = 0; i< n; i++){
        for (int j = 0;  j< i+1; j++){
            cout << char('A'+j);
        }
        cout << endl;
    }
    return 0;
}

int f8(){
    // 5
    // ABCDE
    // ABCD
    // ABC
    // AB
    // A
    int n;
    cin >> n;
    for (int i = n; i>0; i--){
        for (int j = 0;  j< i; j++){
            cout << char('A'+j);
        }
        cout << endl;
    }
    return 0;
}

int f9(){

//     5
//     A
//    ABA
//   ABCBA
//  ABCDCBA
// ABCDEDCBA
    int n;
    cin >> n;
    for (int i = 0; i<n; i++){
        for (int k = 0; k< n-i-1; k++){
            cout << " "; 
        }
        for (int j = 0; j<i+1; j++){
            cout << char('A'+j);

        }
        if(i>0){
            for (int j = i-1; j>=0; j--){
                cout << char('A'+j);
            }
        }
        cout << endl;
        
    }
    return 0;
}

int f10(){
    //     5
    // E
    // DE
    // CDE
    // BCDE
    // ABCDE
    int n;
    cin >> n;
    for (int i = 0; i<n; i++){
        for (int j = i ; j>=0; j--){
            cout << char('A'+n-j-1);
        }
        cout << endl;
    }
    return 0;
}

int f11(){

//     5
// **********
// ****  ****
// ***    ***
// **      **
// *        *
// *        *
// **      **
// ***    ***
// ****  ****
// **********
    int n;
    cin >> n;
    for ( int i = 0; i<n; i++){
        for (int j = i; j<n;j++){
            cout << "*";
        }
        for ( int j = 0 ; j<i*2; j++){
            cout << " ";
        }
        for (int j = i; j<n;j++){
            cout << "*";
        }
        cout << endl;

    }
    for ( int i = 0; i<n; i++){
        
        for (int j = 0; j<i+1;j++){
            cout << "*";
        }
        for ( int j = 0 ; j<2*(n-i-1); j++){
            cout << " ";
        }
        for (int j = 0; j<i+1;j++){
            cout << "*";
        }
        cout << endl;

    }
    
    return 0;
}

int f12(){
    // 6
// *          *
// **        **
// ***      ***
// ****    ****
// *****  *****
// ************
// *****  *****
// ****    ****
// ***      ***
// **        **
// *          *
    int n;
    cin >> n;
    for ( int i = 0; i<n; i++){
        
        for (int j = 0; j<i+1;j++){
            cout << "*";
        }
        for ( int j = 0 ; j<2*(n-i-1); j++){
            cout << " ";
        }
        for (int j = 0; j<i+1;j++){
            cout << "*";
        }
        cout << endl;

    }
    for ( int i = 1; i<n; i++){
        for (int j = i; j<n;j++){
            cout << "*";
        }
        for ( int j = 0 ; j<i*2; j++){
            cout << " ";
        }
        for (int j = i; j<n;j++){
            cout << "*";
        }
        cout << endl;

    }
    
    
    return 0;

}

int f13(){
    //     6
// ******
// *    *
// *    *
// *    *
// *    *
// ******
    int n;
    cin >> n;
    for (int i = 0; i<n; i++){
        for (int j = 0; j< n; j++){
            if(i==0 || j==0 || i== n-1 || j==n-1){
                cout << "*";

            }
            else cout << " ";
            
        }
        cout << endl;
    }
    return 0;
}

int f14(){

//     5
// 5 5 5 5 5 5 5 5 5 
// 5 4 4 4 4 4 4 4 5 
// 5 4 3 3 3 3 3 4 5 
// 5 4 3 2 2 2 3 4 5 
// 5 4 3 2 1 2 3 4 5 
// 5 4 3 2 2 2 3 4 5 
// 5 4 3 3 3 3 3 4 5 
// 5 4 4 4 4 4 4 4 5 
// 5 5 5 5 5 5 5 5 5 
        int n;
        cin >> n;
        // Outer loop for rows
        for (int i = 0; i < 2 * n - 1; i++) {
            // Inner loop for columns
            for (int j = 0; j < 2 * n - 1; j++) {
                // Calculate distance from top
                int top = i;
                // Calculate distance from left
                int left = j;
                // Calculate distance from bottom
                int bottom = (2 * n - 2) - i;
                // Calculate distance from right
                int right = (2 * n - 2) - j;

                // Take the minimum of all four distances
                int minDist = min(min(top, bottom), min(left, right));

                // Print number (starts with n at border, decreases inside)
                cout << (n - minDist) << " ";
            }
            // Move to the next row
            cout << endl;
        }
        return 0;
}

int main() {
    // call function here
    return 0;
}