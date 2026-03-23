#include <iostream>
#include <vector>

using namespace std;

int n;
int x1, x2;
int ans;
int arr[2002] = {};
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
    int cnt = 0;
    bool is_line = false;

    for(int i = 0; i < 2002; i++) {
        if(arr[i] != 0 && !is_line) {
            cnt++;
            is_line = true;
        }
        else if(arr[i] == 0) {
            is_line = false;
        }
    }

    ans = max(ans, cnt);
}

void clean(){
    for(int i = 0; i < 2002; i++){
        arr[i] = 0;
    }
}

void DFS(int a) {
    if(a == n) {
        for(int i = 0; i < v.size(); i++){
            for(int j = line[v[i]].x * 2; j <= line[v[i]].y * 2; j++){
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
