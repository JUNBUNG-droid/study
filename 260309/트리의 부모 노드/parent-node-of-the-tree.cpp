#include <iostream>
#include <vector>

using namespace std;

int n;
int from, to;
vector<int> v[100001];
int visited[100001];
int parents[100001];

void DFS(int x){
    visited[x]=1;
    for(int i=0; i<v[x].size(); i++){
        if(!visited[v[x][i]]){
            visited[v[x][i]]=1;
            parents[v[x][i]]=x;
            DFS(v[x][i]);
        }
    }
}

int main() {
    cin >> n;
    for (int i = 0; i < n - 1; i++) {
        cin >> from >> to;
        v[from].push_back(to);
        v[to].push_back(from);
    }

    // Please write your code here.
    DFS(1);
    for (int i = 2; i <= n; i++) {
        cout << parents[i] << "\n";
    }

    return 0;
}