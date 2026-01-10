#include <iostream>
#include <algorithm>
using namespace std;

int N;
int h[1000];
int w[1000];

class Info{
    public:
        int h, w, n;
    Info(int h, int w, int n){
        this->h=h;
        this->w=w;
        this->n=n;
    }
    Info(){}
};

bool cmp(Info a, Info b){
    if(a.h!=b.h){
        return a.h>b.h;
    }
    if(a.w!=b.w){
        return a.w>b.w;
    }
    return a.n<b.n;
}

Info info[1000];

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> h[i] >> w[i];
        info[i]=Info(h[i],w[i],i+1);
    }

    // Please write your code here.
    sort(info, info+N, cmp);
    for(int i=0; i<N; i++){
        cout << info[i].h << " " << info[i].w << " " << info[i].n << "\n";
    }
    return 0;
}
