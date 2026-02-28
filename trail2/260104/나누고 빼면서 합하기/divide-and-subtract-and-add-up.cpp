#include <iostream>

using namespace std;

int n, m;
int A[100];

int a(int arr[], int b){
    int sum=0;
    while(b>=1){
        if(b%2==0){
            sum+=arr[b-1];
            b/=2;
        }
        else{
            sum+=arr[b-1];
            b-=1;
        }
    }
    return sum;
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    // Please write your code here.
    cout << a(A,m);

    return 0;
}