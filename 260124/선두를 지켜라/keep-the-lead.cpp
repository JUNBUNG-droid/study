#include <iostream>

using namespace std;

int N, M;

int a[1000000]={};
int b[1000000]={};

int main() {
    cin >> N >> M;
    // Please write your code here.
    int a_time=1;
    for(int i=0; i<N; i++){
        int v, t;
        cin >> v >> t;
        while(t--){
            a[a_time]=a[a_time-1]+v;
            a_time++;
        }
    }
    int b_time=1;
    for(int i=0; i<M; i++){
        int v, t;
        cin >> v >> t;
        while(t--){
            b[b_time]=b[b_time-1]+v;
            b_time++;
        }
    }
    int cnt = 0;
    int prev = 0;
    for(int i=1; i<a_time; i++){
        if(a[i]-b[i]!=0){
            prev=a[i]-b[i];
            break;
        }
    }

    for(int i = 1; i < a_time; i++){
        int curr = a[i] - b[i];

        if(curr == 0) continue;

        if(prev*curr<0){
            cnt++;
        }

        prev = curr;
    }
    cout << cnt;
    return 0;
}