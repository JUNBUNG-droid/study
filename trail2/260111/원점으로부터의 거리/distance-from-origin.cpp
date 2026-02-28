#include <iostream>
#include <algorithm>
using namespace std;

int N;
int x[1000];
int y[1000];

class Distance{
    public:
        int x, y, n;
    Distance(int x, int y, int n){
        if(x<0){
            x=0-x;
        }
        if(y<0){
            y=0-y;
        }
        this->x=x;
        this->y=y;
        this->n=n;
    }
    Distance(){}
};

bool cmp(Distance a, Distance b){
    if(a.x+a.y!=b.x+b.y){
        return a.x+a.y<b.x+b.y;
    }
    return a.n<b.n;
}

Distance d[1000];

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> x[i] >> y[i];
        d[i]=Distance(x[i],y[i],i+1);
    }
    
    // Please write your code here.
    sort(d, d+N, cmp);
    for (int i = 0; i < N; i++) {
        cout << d[i].n << "\n";
    }
    return 0;
}
