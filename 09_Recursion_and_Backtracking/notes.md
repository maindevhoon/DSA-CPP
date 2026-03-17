# Recursion and Backtracking

## Recursion

### Definition
A function that calls itself to solve smaller instances of the same problem.

### Key Components
- **Base Case**: Condition that stops recursion
- **Recursive Case**: Function calls itself with modified parameters
- **Call Stack**: Tracks function calls and returns

### Example
```cpp
int factorial(int n) {
    if (n <= 1) return 1;           // Base case
    return n * factorial(n - 1);    // Recursive case
}
```

### Characteristics
- Used for divide-and-conquer problems
- Can be space-inefficient (call stack overhead)
- Tree traversal, permutations, combinations

---

## Backtracking

### Definition
A recursive technique that explores all possible solutions and "backs off" when a path doesn't lead to a valid solution.

### Process
1. Make a choice
2. Explore recursively
3. Undo the choice (backtrack) if no solution found

### Common Applications
- N-Queens problem
- Sudoku solver
- Word search
- Permutations/Combinations
- Graph coloring

### Example Pattern
```cpp
void backtrack(vector<int>& path, vector<bool>& used) {
    if (isComplete(path)) {
        solutions.push_back(path);
        return;
    }
    
    for (int i = 0; i < n; i++) {
        if (!used[i]) {
            path.push_back(i);
            used[i] = true;
            backtrack(path, used);
            path.pop_back();
            used[i] = false;
        }
    }
}
```

### Time Complexity
- Worst case: O(N!) for permutation problems
- Pruning helps reduce search space
