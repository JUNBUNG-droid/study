#include <iostream>
using namespace std;

int max_h(int arr[], int len){
    int max = arr[0];
    for(int i=1; i<len; i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    return max;
}

int main() {
    // Please write your code here.
    int block[100]={};
    int N, K;
    cin >> N >> K;

    for(int i=0; i<K; i++){
        int A, B;
        cin >> A >> B;
        for(int j=A; j<=B; j++){
            block[j-1]++;
        }
    }
    cout << max_h(block, N);
    return 0;
}