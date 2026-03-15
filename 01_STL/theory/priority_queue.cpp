#include <bits/stdc++.h>
using namespace std;

void explainPQ(){
    priority_queue<int> pq;
    // highest at top or lexicographically greatest for char
    // no indexing
    // max heap used internally
    priority_queue<int>p1;  // max heap, vector internally
    priority_queue<int, vector<int>> p2;  // explicit — same thing
    priority_queue<int, vector<int>, greater<int>> p3;        // min heap   
    pq.push(10); // {10}
    pq.emplace(20); // {20,10}
    pq.push(5); // {20,10,5} TC-> log(n)
    cout << pq.top(); // O(n)
    pq.pop(); // {10,5} TC -> log(n)

}
int main(){

    explainPQ();
}