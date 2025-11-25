#include <iostream>
using namespace std;

int main() {
    int n, a=0;
    cin >> n;
    for (int i=1; i<=n; i++){
        if(i%2==0||i%3==0||i%5==0){
            continue;
        }
        a+=1;
    }
    cout << a;
    return 0;
}