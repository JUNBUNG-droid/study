#include <iostream>

using namespace std;

int N;
int a[100], b[100], c[100];

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> a[i] >> b[i] >> c[i];
    }

    // Please write your code here.
    int max_val=0, idx=0;
    while(true){
        if(idx==N) break;
        char d[3]={};
        int cnt=0;
        d[idx]='Y';
        for(int i=0; i<N; i++){
            int temp;
            temp = d[b[i]];
            d[b[i]] = d[a[i]];
            d[a[i]] = temp;
            if(d[c[i]]=='Y') cnt++;
        }
        if(cnt>max_val) max_val=cnt;   
        idx++;   
    }
    cout << max_val;
    return 0;
}