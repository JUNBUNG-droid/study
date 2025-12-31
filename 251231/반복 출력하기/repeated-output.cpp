#include <iostream>

using namespace std;

int N;

void a(int N){
    for(int i=0; i<N; i++){
        cout << "12345^&*()_";
        cout << '\n';
    }
}

int main() {
    cin >> N;

    // Please write your code here.
    a(N);

    return 0;
}