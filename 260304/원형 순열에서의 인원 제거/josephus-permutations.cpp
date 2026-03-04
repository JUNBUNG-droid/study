#include <iostream>
#include <queue>

using namespace std;

int N, K;

int main() {
    cin >> N >> K;
    
    queue<int> q;
    // Please write your code here.
    for(int i=1; i<=N; i++){
        q.push(i);
    }
    while(!q.empty()){
        for(int i=0; i<K; i++){
            if(i==K-1){
                cout << q.front() << " ";
                q.pop();
            }
            else{
                q.push(q.front());
                q.pop();
            }
        }
    }

    return 0;
}
