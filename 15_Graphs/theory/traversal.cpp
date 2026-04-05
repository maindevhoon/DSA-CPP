#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> make_graph(int vertices,int edges){
    vector<vector<int>> g(vertices);
    int u, v;
    for (int i = 0; i < edges; i++){
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    return g;
}

void printer(vector<vector<int>> &g){
    for (int i = 0; i < g.size(); i++){
        cout << i << " -> ";
        for (int j = 0; j < g[i].size(); j++){
            cout << g[i][j] << " ";
        }
        cout << endl;
    }
}

// BFS
void bfs(int start, vector<vector<int>> &g) {
    // Each vertex is visited exactly once → O(V)
    // Each edge is explored exactly once → O(E)

    // Total Time = O(V + E)

    // visited array → O(V)
    // queue (in worst case stores all vertices) → O(V)

    // Total Space = O(V)
    vector<bool> visited(g.size(), false);
    queue<int> q;

    q.push(start);
    visited[start] = true;

    while (!q.empty()) {
        int node = q.front();
        q.pop();

        cout << node << " ";

        for (int neighbor : g[node]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }
}

// Recursive DFS
void dfs(int node, vector<vector<int>> &g, vector<bool> &visited, vector<int> &ans){
    // Each vertex visited once → O(V)
    // Each edge explored once → O(E)

    // Total Time = O(V + E)

    // visited array → O(V)
    // recursion stack (worst case: skewed graph) → O(V)

    // Total Space = O(V)
    visited[node] = true;
    ans.push_back(node);

    for(int neighbour : g[node]){
        if(!visited[neighbour]){
            dfs(neighbour, g, visited, ans);
        }
    }
}

// Iterative DFS
vector<int> iterative_dfs(int start, vector<vector<int>> &g){

    // Same as BFS/DFS

    // Total Time = O(V + E)    

    // visited array → O(V)
    // stack (worst case stores all vertices) → O(V)

    // Total Space = O(V)
    vector<int> ans;
    vector<bool> visited(g.size(), false);
    stack<int> s;

    s.push(start);
    visited[start] = true;

    while(!s.empty()){
        int node = s.top();
        s.pop();

        ans.push_back(node);

        for (int i = g[node].size() - 1; i >= 0; i--){
            int neighbour = g[node][i];
            if(!visited[neighbour]){
                visited[neighbour] = true;
                s.push(neighbour);
            }
        }
    }
    return ans;
}
