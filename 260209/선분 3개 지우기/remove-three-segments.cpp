#include <iostream>

using namespace std;

int n;
int l[10], r[10];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> l[i] >> r[i];
    }

    // 삭제할 세 선분 정하기(i, j, k)
    int cnt=0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            for(int k=j+1; k<n; k++){
                int line[101]={};
                // 선분 긋기
                for(int m=0; m<n; m++){
                    if(m==i||m==j||m==k) continue;
                    for(int x=l[m]; x<=r[m]; x++) line[x]++;
                }
                // 겹침 여부 확인
                bool overlap = false;
                for(int m=0; m<101; m++){
                    if(line[m]>1) overlap=true;
                }
                if(!overlap) cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}