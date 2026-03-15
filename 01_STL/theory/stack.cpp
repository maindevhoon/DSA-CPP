#include <bits/stdc++.h>
using namespace std;

void explainStack(){
    //stack has no indexing
    //uses deque internally 
    //intentionally hides indexing to expose LIFO behaviour 
    stack<int> s;
    s.push(10);
    s.pop();
    s.emplace(30);
    cout << s.top() << endl;
    cout << s.size() << endl;
    cout << s.empty() << endl; // 1 if empty 0 other wise
    stack<int> s1,s2;
    s1.swap(s2);
}