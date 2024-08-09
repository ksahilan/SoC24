#include <bits/stdc++.h>
using namespace std;

#define MAXN 202020

int n, m;
vector<vector<int>> neigh(MAXN);
vector<bool> visited(MAXN, false);
vector<int> extra;

void DFS (int city) {
  visited[city] = true;
  for (auto child : neigh[city]) {
    if (visited[child] == false) {
      DFS(child);
    }
  }
}

int main() {
    cin >> n >> m;
    for (int i = 0 ; i < m; i++) {
      int city1, city2;
      cin >> city1 >> city2;
      neigh[city1].push_back(city2);
      neigh[city2].push_back(city1);
    }
    for (int i = 1; i <= n; i++) {
      if (visited[i] == false) {
        extra.push_back(i);                             // adding the extra roads needed
        DFS(i);
      }
    }
    cout << extra.size() - 1 << endl;                   // printing the number of extra roads needed
    for (int i = 0; i < extra.size() - 1; i++) {
      cout << extra[i] << " " << extra[i + 1] << endl;  // printing the extra roads needed
    }
    return 0;
}

//https://cses.fi/problemset/task/1666/
