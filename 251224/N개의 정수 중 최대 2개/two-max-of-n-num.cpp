#include <iostream>

using namespace std;

int N;
int A[100];

int main() {
    cin >> N;
    for (int i = 0; i < N; i++){
        cin >> A[i];
    }
    // Please write your code here.
    for (int i=0; i<N-1; i++){
        int max=A[i];
        int temp;
        for(int j=i+1; j<N; j++){
            if(max<A[j]){
                max=A[j];
                temp=A[j];
                A[j]=A[i];
                A[i]=temp;
            }
        }
    }
    cout << A[0] << " " << A[1];
    return 0;
}
