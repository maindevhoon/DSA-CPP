#include <bits/stdc++.h>
using namespace std;

/*
================= ADJACENCY MATRIX vs ADJACENCY LIST =================

1. STRUCTURE
------------------------------------------------------------
Adjacency Matrix:
- 2D array (V x V)
- AdjMat[u][v] = 1 / weight if edge exists

Adjacency List:
- Array of vectors
- adj[u] stores all neighbors of u


2. SPACE COMPLEXITY
------------------------------------------------------------
Matrix:
- O(V^2)  ❌ expensive for large graphs

List:
- O(V + E) ✅ efficient for sparse graphs


3. EDGE CHECK (u → v exists?)
------------------------------------------------------------
Matrix:
- O(1) ✅ direct lookup

List:
- O(deg(u)) ❌ need to search neighbors


4. TRAVERSAL (BFS / DFS)
------------------------------------------------------------
Matrix:
- O(V^2) ❌ must scan entire row

List:
- O(V + E) ✅ only visit actual edges


5. ADD EDGE
------------------------------------------------------------
Matrix:
- O(1)

List:
- O(1) (push_back)


6. REMOVE EDGE
------------------------------------------------------------
Matrix:
- O(1)

List:
- O(deg(u)) ❌ need to find and erase


7. USE CASE
------------------------------------------------------------
Matrix:
- Dense graphs (E ≈ V^2)
- Floyd Warshall
- When fast edge lookup needed

List:
- Sparse graphs (most real-world cases)
- BFS, DFS, Dijkstra, Prim
- Competitive programming standard


8. MEMORY USAGE
------------------------------------------------------------
Matrix:
- Wastes space if graph is sparse ❌

List:
- Stores only existing edges ✅


9. WEIGHTED GRAPH SUPPORT
------------------------------------------------------------
Matrix:
- store weight or INF

List:
- store pair (node, weight)


================= FINAL VERDICT =================
Use Adjacency List in 90% of problems.
Use Matrix only when:
- graph is dense
- or problem specifically needs it

=====================================================================
*/



// info given - edges and vertices

class AdjacencyMatrix{
    public: 
    // TC and SC - O(v^2)
    vector<vector<bool>> Undirected_Unweighted(){
        int vertex, edges;
        cin >> vertex >> edges;

        vector<vector<bool>>AdjMat(vertex,vector<bool>(vertex,0));
        int u,v;
        for(int i = 0; i<edges;i++){
            cin >> u >> v;
            AdjMat[u][v] = 1;
            AdjMat[v][u] = 1;
        }
        return AdjMat;
    }

    vector<vector<int>> Undirected_weighted(){
        int vertex, edges;
        cin >> vertex >> edges;

        vector<vector<int>>AdjMat(vertex,vector<int>(vertex,1e9)); // 1e9 == INF
        for (int i = 0; i < vertex; i++) {
            AdjMat[i][i] = 0;
        }
        int u,v, w;
        for(int i = 0; i<edges;i++){
            cin >> u >> v >> w; // pro tip if there are multiple weights for same edge use min (prev,new)
            AdjMat[u][v] = w;
            AdjMat[v][u] = w;
        }
        return AdjMat;
    }

    vector<vector<int>> directed_weighted(){
        int vertex, edges;
        cin >> vertex >> edges;

        vector<vector<int>>AdjMat(vertex,vector<int>(vertex,1e9)); // 1e9 == INF
        for (int i = 0; i < vertex; i++) {
            AdjMat[i][i] = 0;
        }
        int u,v, w;
        for(int i = 0; i<edges;i++){
            cin >> u >> v >> w;
            AdjMat[u][v] = w;
        }
        return AdjMat;
    }



    template <typename T>
    void printer(vector<vector<T>>AdjMat){
        for ( auto x : AdjMat){
            for (auto y : x){
                cout << y << " ";
            }
            cout << endl;
        }
    }
};


class AdjacencyList{
    public:
        vector<vector<int>> AdjList(){
            int vertices,edges;
            cin >> vertices >> edges;
            vector<vector<int>> adjlist(vertices);
            for(int i = 0; i<edges; i++){
                int u,v;
                cin >> u >> v;
                adjlist[u].push_back(v);
                adjlist[v].push_back(u);
            }
            return adjlist;
        }
        void printer(vector<vector<int>>AdjList){
            for (int i = 0; i<AdjList.size(); i++){
                cout << i << " -> ";
                for (int j = 0;j<AdjList[i].size(); j++){
                    cout << AdjList[i][j] << " ";
                }
                cout << endl;
            }
        }
};

int main() {
    AdjacencyList obj;

    auto mat = obj.AdjList();
    obj.printer(mat);

    return 0;
}