#include <bits/stdc++.h>
using namespace std;


void count_of_digits(int n){
    // int count = 0;
    // while(n>0){
    //     n = n/10;
    //     count++;
    // }
    // cout << count;

    // approach 2
    // cout << (int) log10(n) +1;

    //TC- log10 (n) --- if time complexity is based on division it will be logarithmic with base as number used as divisor.
}

void armstrong_number(int n){
    // 371 = 3^3 + 7^3 + 1^3

    // fetch digits add after talking each digits cube.
}

void print_divisors(int n){
    // check all from 1...n 
    // TC = O(n)

    // check all from 1...sqrt(n)
    // if 1<= x <= sqrt(x) and x is a factor n/x is also a factor
    // TC = O(sqrt(n))

    for (int i = 1; i*i<=n; i++){
        if(n%i==0){
            cout << i << " ";
            if(n/i != i){
                cout << n/i << " ";
            }
        }
    }

    // sqrt is a mathematical function that also takes time to execute.
    // you can also sort the factors in O(nlog(n)).
}

void check_prime(int n){
    // the number which has exactly 2 factors 1 and itself.
    // check factors
}

int GCD (int a, int b){
    // euclidean algorithm
    // gcd (a,b) = gcd (a-b, b) where a > b
     while (b) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}


int main() {
    cout << GCD (7, 15);
    return 0;
}