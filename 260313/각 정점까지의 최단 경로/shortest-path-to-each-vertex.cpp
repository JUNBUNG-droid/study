#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

int n, m, k;
int from, to, weight;
int distArr[20001]={};

class Node{
    public:
        int vertex, dist;
    Node(int vertex, int dist){
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
        this->to = to;
        this->weight = weight;
    }
};

vector<Edge> graph[300001];
priority_queue<Node> pq;

void dijkstra(int start){
    for(int i=1; i<=n; i++){
        distArr[i]=INT_MAX;
    }
    distArr[start]=0;
    pq.push(Node(start, 0));
    while(!pq.empty()){
        int curNode = pq.top().vertex;
        int curDist = pq.top().dist;
        pq.pop(); 
        if(curDist>distArr[curNode]) continue;
        for(int i=0; i<graph[curNode].size(); i++){
            int next = graph[curNode][i].to;
            int cost = curDist + graph[curNode][i].weight;
            if(distArr[next] > cost){
                distArr[next] = cost;
                pq.push(Node(next,cost));
            } 
        }
    }
}

int main() {
    cin >> n >> m >> k;

    for (int i = 0; i < m; i++) {
        cin >> from >> to >> weight;
        graph[from].push_back(Edge(to,weight));
        graph[to].push_back(Edge(from,weight));
    }

    // Please write your code here.
    dijkstra(k);

    for(int i=1; i<=n; i++){
        if(distArr[i]==INT_MAX) cout << -1 << "\n";
        else cout << distArr[i] << "\n";
    }
    return 0;
}