#include <iostream>

using namespace std;

int N;
int a[1000];

int main() {
    cin >> N;
    int b=N;
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }

    // Please write your code here.
    while(b>0){
        int max=a[0];
        int idx=0;

        for (int i = 1; i < b; i++) {
            if(a[i]>max){
                max=a[i];
                idx=i;
            }
        }
        b=idx;
        cout << idx+1 << " ";
    }

    return 0;
}
