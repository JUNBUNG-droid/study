#include <iostream>
#include <algorithm>

using namespace std;

int n, m;
int a[1000001]={};
int b[1000001]={};

int main() {
    cin >> n >> m;

    // Please write your code here.
    int apoint=1;
    for(int i=0; i<n; i++){
        int t;
        char d;
        cin >> t >> d;
        while(t--){
            if(d=='R'){
                a[apoint]=a[apoint-1]+1;
            }
            else if(d=='L'){
                a[apoint]=a[apoint-1]-1;
            }
            apoint++;
        }
    }
    int bpoint=1;
    for(int i=0; i<m; i++){
        int t;
        char d;
        cin >> t >> d;
        while(t--){
            if(d=='R'){
                b[bpoint]=b[bpoint-1]+1;
            }
            else if(d=='L'){
                b[bpoint]=b[bpoint-1]-1;
            }
            bpoint++;
        }
    }

    int start=min(apoint, bpoint);
    int goal=max(apoint, bpoint);

    for(int i=start; i<goal; i++){
        if(apoint<bpoint){
            a[i]=a[apoint-1];
        }
        else if(apoint>bpoint){
            b[i]=b[bpoint-1];
        }
    }

    int cnt=0;
    for(int i=1; i<goal; i++){
        if(a[i]==b[i]&&a[i-1]!=b[i-1]){
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}