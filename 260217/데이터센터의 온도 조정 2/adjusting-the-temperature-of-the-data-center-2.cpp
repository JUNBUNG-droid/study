#include <iostream>
#include <algorithm>

using namespace std;

int N, C, G, H;
int Ta[1000], Tb[1000];

int cal(int a){
    int work=0;
    for(int i=0; i<N; i++){
        if(a<Ta[i]) work+=C;
        else if(a>=Ta[i]&&a<=Tb[i]) work+=G;
        else work+=H;
    }
    return work;
}

int main() {
    cin >> N >> C >> G >> H;

    for (int i = 0; i < N; i++) {
        cin >> Ta[i] >> Tb[i];
    }

    // Please write your code here.
    int max_work=0;
    for(int i=0; i<1002; i++){
        max_work=max(max_work, cal(i));
    }

    cout << max_work;
    return 0;
}