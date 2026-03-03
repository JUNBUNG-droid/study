#include <iostream>
#include <vector>

using namespace std;

int n, m;
int from, to;
vector<vector<int>> graph;
vector<bool> visit;

void DFS(int v){
    visit[v] = true;
    for(int i=0; i<graph[v].size(); i++){
        int cur_v=graph[v][i];
        if(visit[cur_v]==false){
            visit[cur_v]=true;
            DFS(cur_v);
        }
    }
}

int main() {
    cin >> n >> m;
    graph.resize(n+1);
    visit.resize(n+1, false);
    for (int i = 0; i < m; i++) {
        cin >> from >> to;
        graph[from].push_back(to);
        graph[to].push_back(from);
    }

    // Please write your code here.
    DFS(1);
    int count = 0;
    for(int i = 2; i <= n; i++){
        if(visit[i]) count++;
    }

    cout << count;
    return 0;
}
