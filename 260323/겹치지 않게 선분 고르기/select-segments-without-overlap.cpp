#include <iostream>
#include <vector>

using namespace std;

int n;
int x1, x2;
int ans;
int arr[1001] = {};
vector<int> v;

class Line{
    public:
        int x, y;
    
    Line(int x, int y){
        this -> x = x;
        this -> y = y;
    }

    Line(){}
};

Line line[15] = {};

void check() {
    int cnt = 1;
    bool is_line = false;
    for(int i=0; i<1001; i++) {
        if(arr[i] != 0) is_line = true;
        if(is_line && arr[i] == 0){
            cnt += 1;
            is_line = false;
        } 
    }
    if(ans < cnt) ans = cnt;
}

void clean(){
    for(int i = 0; i < 1001; i++){
        arr[i] = 0;
    }
}

void DFS(int a) {
    if(a == n) {
        for(int i = 0; i < v.size(); i++){
            for(int j = line[v[i]].x; j <= line[v[i]].y; j++){
                arr[j] += 1;
            }
        }
        check();
        clean();
        return;
    }

    v.push_back(a);
    DFS(a + 1);
    v.pop_back();
    DFS(a + 1);
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x1 >> x2;
        line[i] = Line(x1, x2);
    }

    // Please write your code here.
    DFS(0);
    cout << ans;
    return 0;
}
