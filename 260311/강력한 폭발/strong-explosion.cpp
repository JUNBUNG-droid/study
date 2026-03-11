#include <iostream>
#include <vector>

using namespace std;

int n;
int grid[20][20];
int r[20]={};
int c[20]={};
vector<int> v;

bool inrange(int r, int c){
    return 0<=r&&r<n&&0<=c&&c<n;
}

void bomb1(int temp[][20], int r, int c) {
    temp[r][c] = 1;
    for (int i = 1; i <= 2; i++) {
        if (inrange(r + i, c)) temp[r + i][c] = 1;
        if (inrange(r - i, c)) temp[r - i][c] = 1;
    }
}

void bomb2(int temp[][20], int r, int c) {
    temp[r][c] = 1;
    if (inrange(r + 1, c)) temp[r + 1][c] = 1;
    if (inrange(r - 1, c)) temp[r - 1][c] = 1;
    if (inrange(r, c + 1)) temp[r][c + 1] = 1;
    if (inrange(r, c - 1)) temp[r][c - 1] = 1;
}

void bomb3(int temp[][20], int r, int c) {
    temp[r][c] = 1;
    if (inrange(r + 1, c + 1)) temp[r + 1][c + 1] = 1;
    if (inrange(r - 1, c - 1)) temp[r - 1][c - 1] = 1;
    if (inrange(r + 1, c - 1)) temp[r + 1][c - 1] = 1;
    if (inrange(r - 1, c + 1)) temp[r - 1][c + 1] = 1;
}

int check(int temp[][20]){
    int cnt=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(temp[i][j]==1) cnt++;
        }
    }
    return cnt;
}

int max_val=-1;
int choose(int a, int k){
    if(a==k){
        int temp[20][20]={};
        for(int i=0; i<v.size(); i++){
            if(v[i]==1){
                bomb1(temp,r[i],c[i]);
            }
            else if(v[i]==2){
                bomb2(temp,r[i],c[i]);
            }
            else if(v[i]==3){
                bomb3(temp,r[i],c[i]);
            }
        }
        int ans = check(temp);  
        if(max_val<ans) max_val=ans; 
        return max_val;
    }    
    for(int i=1; i<=3; i++){
        v.push_back(i);
        choose(a+1, k);
        v.pop_back();
    }
    return max_val;
}

int main() {
    cin >> n;
    int k=0;
    int idx=0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
            if(grid[i][j]==1){
                r[idx]=i;
                c[idx]=j;
                idx++;
                k++;
            } 
        }
    }

    // Please write your code here.
    cout << choose(0, k);
    return 0;
}
