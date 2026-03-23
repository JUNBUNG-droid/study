#include <iostream>
#include <vector>
#include <queue>
#include <climits>
#include <algorithm>

using namespace std;

int n, m;
int from, to, weight;
int A, B;
long long dist_arr[1001];

class Node{
    public:
        int vertex;
        long long dist;
    
    Node(int vertex, long long dist) {
        this -> vertex = vertex;
        this -> dist = dist;
    }

    bool operator< (const Node& other) const {
        return dist > other.dist;
    }
};

class Edge{
    public:
        int to, weight;
    
    Edge(int to, int weight) {
        this -> to = to;
        this -> weight = weight;
    }
};

vector<Edge> graph[1001];
priority_queue<Node> pq;

void dijkstra(int a) {
    dist_arr[a] = 0;
    pq.push(Node(a, 0));

    while(!pq.empty()) {
        int cur_node = pq.top().vertex;
        long long cur_dist = pq.top().dist;
        pq.pop();
        if(cur_dist > dist_arr[cur_node]) continue;
        for(int i = 0; i < graph[cur_node].size(); i++){
            int next = graph[cur_node][i].to;
            long long cost = cur_dist + graph[cur_node][i].weight;
            if(cost < dist_arr[next]) {
                dist_arr[next] = cost;
                pq.push(Node(next, cost));
            }
        }
    }
}

bool cmp(Edge a, Edge b) {
    return a.to < b.to;
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        cin >> from >> to >> weight;
        graph[from].push_back(Edge(to, weight));
        graph[to].push_back(Edge(from, weight));
    }

    for(int i = 1; i <= n; i++) {
        dist_arr[i] = LLONG_MAX;
        sort(graph[i].begin(), graph[i].end(), cmp);
    }

    cin >> A >> B;

    // Please write your code here.
    dijkstra(B);
    cout << dist_arr[A] << "\n";

    int x = A;
    cout << x << " ";
    while(x != B) {
        for(int i = 0; i < graph[x].size(); i++){
            if(dist_arr[graph[x][i].to] + graph[x][i].weight == dist_arr[x]){
                x = graph[x][i].to;
                break;
            }
        }
        cout << x << " ";
    }

    return 0;
}
