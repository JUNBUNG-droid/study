#include <iostream>

using namespace std;

int N;

void a(int n){
    int sum=0;
    for(int i=1; i<=n; i++){
        sum+=i;
    }
    cout << sum/10;
}

int main() {
    cin >> N;

    a(N);

    return 0;
}