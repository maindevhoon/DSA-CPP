#include <bits/stdc++.h>
using namespace std;

void explainQueue(){
    //FIFO - First In First Out 
    queue <int> q;
    q.push(10); // adds 10 to the back
    q.emplace(20); // constructs and adds 20 to the back, similar to push but more efficient for complex types
    q.push(30);
    
    cout << "Front: " << q.front() << endl; // 10
    cout << "Back: " << q.back() << endl; // 30
    
    q.pop(); // removes front element (10)
    cout << "After pop, Front: " << q.front() << endl; // 20
    
    cout << "Size: " << q.size() << endl; // 2
    cout << "Empty: " << q.empty() << endl; // 0 (false)
    
    // Swap two queues
    queue<int> q1, q2;
    q1.push(1);
    q2.push(2);
    q1.swap(q2); // q1 now has 2, q2 has 1
    
    cout << "After swap, q1 front: " << q1.front() << endl; // 2
    cout << "q2 front: " << q2.front() << endl; // 1
    
    // Queue with pairs
    queue<pair<int, string>> qp;
    qp.emplace(1, "one");
    qp.push({2, "two"});
    cout << "Pair queue front: " << qp.front().first << " " << qp.front().second << endl;
    
    // Queue with strings
    queue<string> qs;
    qs.push("hello");
    qs.push("world");
    cout << "String queue front: " << qs.front() << endl;
}

int main() {
    explainQueue();
    return 0;
}