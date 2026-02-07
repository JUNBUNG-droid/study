#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int N;
int x[100];
int y[100];

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> x[i] >> y[i];
    }

    // Please write your code here.
    int best=0;
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            if(i==j) continue;
            for(int k=0; k<N; k++){
                if(j==k||k==i) continue;
                if(x[i]==x[j]&&y[i]==y[k]){
                    int mx=abs(x[i]-x[k]);
                    int my=abs(y[i]-y[j]);
                    best=max(best,mx*my);
                }
            }
        }
    }
    cout << best;
    return 0;
}