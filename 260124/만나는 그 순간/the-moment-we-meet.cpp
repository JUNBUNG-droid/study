#include <iostream>

using namespace std;

int n, m;
char d[1000];
int t[1000];
char d2[1000];
int t2[1000];

int a[1000]={};
int b[1000]={};

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) cin >> d[i] >> t[i];

    for (int i = 0; i < m; i++) cin >> d2[i] >> t2[i];

    // Please write your code here.
    int time=0;
    for(int i=0; i<n; i++){
        time += t[i];
    }
    int starta=1, startb=1;
    for(int i=0; i<n; i++){
        for(int j=1; j<=t[i]; j++){
            if(d[i]=='R'){
                a[starta]=a[starta-1]+1;
                starta++;
            }
            else if(d[i]=='L'){
                a[starta]=a[starta-1]-1;
                starta++;
            }
        }
    }
    for(int i=0; i<m; i++){
        for(int j=1; j<=t2[i]; j++){
            if(d2[i]=='R'){
                b[startb]=b[startb-1]+1;
                startb++;
            }
            else if(d2[i]=='L'){
                b[startb]=b[startb-1]-1;
                startb++;
            }
        }
    }
    for(int i=1; i<=time; i++){
        if(a[i]==b[i]){
            cout << i;
            return 0;
        }
    }
    cout << -1;
    return 0;
}