#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

int n, m, k;
int from, to, weight;

class Node{
    public:
        int vertex;
        long long dist;

    Node(int vertex, long long dist){
        this->vertex=vertex;
        this->dist=dist;
    }

    bool operator<(const Node& other) const{
        return dist > other.dist;
    }
};

class Edge{
    public:
        int to, weight;
    
    Edge(int to, int weight){
        this->to=to;
        this->weight=weight;
    }
};

vector<Edge> graph[100001];
priority_queue<Node> pq;
long long dist_arr[100001]={};

void Dijkstra(int a){
    dist_arr[a] = 0;
    pq.push(Node(a, 0));

    while(!pq.empty()){
        int curNode = pq.top().vertex;
        long long curDist = pq.top().dist;
        pq.pop();
        if(curDist > dist_arr[curNode]) continue;
        for(int i = 0; i < graph[curNode].size(); i++){
            int next = graph[curNode][i].to;
            long long cost = curDist + graph[curNode][i].weight;
            if(cost < dist_arr[next]){
                dist_arr[next] = cost;
                pq.push(Node(next, cost));
            }
        }
    }
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        cin >> from >> to >> weight;
        graph[to].push_back(Edge(from, weight));
    }

    // Please write your code here.
    for(int i = 1; i <= n; i++){
        dist_arr[i] = LLONG_MAX;
    }
    Dijkstra(n);

    long long ans = -1;
    for(int i = 1; i <= n; i++){
        if(dist_arr[i] > ans) ans = dist_arr[i];
    }
    cout << ans;
    return 0;
}
