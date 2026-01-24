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

    for(int i = 1; i < a_time; i++){
        int curr = 0;
        
        if(a[i] > b[i]) curr = 1;
        else if(a[i] < b[i]) curr = -1;

        if(prev != 0 && curr != 0 && prev != curr){
            cnt++;
        }

        if(curr != 0){
            prev = curr;
        }
    }
    cout << cnt;
    return 0;
}