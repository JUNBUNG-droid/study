#include <iostream>
#include <algorithm>
using namespace std;

int N;
int sequence[1000];

class Num{
    public:
        int a, n, idx;
    Num(int a, int idx, int n=0){
        this->a=a;
        this->idx=idx;
        this->n=n;
    }
    Num(){}
};

bool cmp(Num b, Num c){
    if(b.a!=c.a){
        return b.a<c.a;
    }
    return b.idx<c.idx;
}
bool cmp2(Num b, Num c){
    return b.idx<c.idx;
}

Num n[1000];

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> sequence[i];
        n[i]=Num(sequence[i],i);
    }

    // Please write your code here.
    sort(n, n+N, cmp);
    for (int i = 0; i < N; i++) {
        n[i]=Num(n[i].a, n[i].idx, i+1);
    }
    sort(n, n+N, cmp2);
    for (int i = 0; i < N; i++) {
        cout << n[i].n << " ";
    }
    return 0;
}
