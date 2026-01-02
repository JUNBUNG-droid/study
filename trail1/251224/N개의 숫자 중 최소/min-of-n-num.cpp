#include <iostream>

using namespace std;

int N, cnt=0;
int A[100];

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    // Please write your code here.
    int min=A[0];
    for (int i=1; i<N; i++){
        if(min>A[i]){
            min=A[i];
        }
    }
    for (int i = 0; i < N; i++) {
        if(A[i]==min){
            cnt++;
        }
    }    
    cout << min << " " << cnt;
    return 0;
}
