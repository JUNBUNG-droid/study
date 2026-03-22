#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

int N, M;
int i, j, d;
int A, B;

class Node{
    public:
        int vertex;
        long long dist;
    
    Node (int vertex, long long dist) {
        this -> vertex = vertex;
        this -> dist = dist;
    }

    bool operator<(const Node& other)const {
        return dist > other.dist;
    }
};

class Edge{
    public:
        int to, weight;
    
    Edge (int to, int weight) {
        this -> to = to;
        this -> weight = weight;
    }
};

vector<Edge> graph[1001];
priority_queue<Node> pq;
long long dist_arr[1001];
int path[1001];

void dijkstra(int a) {
    dist_arr[a] = 0;
    pq.push(Node(a, 0));

    while(!pq.empty()) {
        int cur_node = pq.top().vertex;
        long long dist = pq.top().dist;
        pq.pop();
        if(dist > dist_arr[cur_node]) continue;
        for(int i = 0; i < graph[cur_node].size(); i++) {
            int next = graph[cur_node][i].to;
            long long cost = dist + graph[cur_node][i].weight;
            if(cost < dist_arr[next]) {
                dist_arr[next] = cost;
                path[next] = cur_node;
                pq.push(Node(next, cost));
            }
        }
    }
}

int main() {
    cin >> N >> M;

    for (int k = 0; k < M; k++) {
        cin >> i >> j >> d;
        graph[i].push_back(Edge(j, d));
        graph[j].push_back(Edge(i, d));
    }

    for(int i = 1; i <= N; i++) {
        dist_arr[i] = LLONG_MAX;
    }

    cin >> A >> B;
    dijkstra(A);

    vector<int> route;
    int x = B;
    while(true){
        route.push_back(x);
        if(x == A) break;
        x = path[x];
    }

    cout << dist_arr[B] << "\n";
    for(int i = route.size()-1; i >= 0; i--) {
        cout << route[i] << " ";
    }
    return 0;
}
