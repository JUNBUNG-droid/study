#include <iostream>
#include <algorithm>

using namespace std;

int N;
char map[101]={};
int pos;
char alpha;

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> pos >> alpha;
        map[pos]=alpha;
    }

    // Please write your code here.
    int max_val=0;
    for(int i=0; i<100; i++){
        for(int k=i+1; k<101; k++){
            int gcnt=0, hcnt=0;
            for(int j=i; j<=k; j++){
                if(map[j]=='G'){
                    gcnt++;           
                }
                else if(map[j]=='H'){
                    hcnt++;
                }
            }
            if(gcnt==0&&hcnt==0) continue;
            if((gcnt==hcnt || gcnt==0 || hcnt==0)&&map[k]!=0&&map[i]!=0){
                max_val = max(max_val, k-i);
            }
        }
    }
    cout << max_val;
    return 0;
}