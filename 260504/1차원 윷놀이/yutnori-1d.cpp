#include <iostream>
#include <vector>

using namespace std;

int n, m, k, ans;
int nums[12];
int board[12];
vector<int> v;

void move(int idx){
    if(idx==n){
        int cnt=0;
        for(int i=0; i<n; i++){
            board[v[i]]+=nums[i];
        }
        for(int i=0; i<n; i++){
            if(board[i]>=m-1) cnt++;
        }
        if(cnt>ans) ans=cnt;
        for(int i=0; i<n; i++) board[i]=0;
        return;
    }
    for(int i=0; i<k; i++){
        v.push_back(i);
        move(idx+1);
        v.pop_back();
    }
}

int main() {
    cin >> n >> m >> k;

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    // Please write your code here.
    move(0);
    cout<<ans;
    return 0;
}
