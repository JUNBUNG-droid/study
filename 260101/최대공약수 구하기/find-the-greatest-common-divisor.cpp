#include <iostream>

using namespace std;

int n, m;

void cal(int n, int m){
    int a;
    if(n>m){
        a=m;
    }
    else{
        a=n;
    }
    int b;
    for(int i=1; i<=a; i++){
        if(n%i==0&&m%i==0){
            b=i;
        }
    }
    cout << b;
}

int main() {
    cin >> n >> m;

    // Please write your code here.
    cal(n,m);

    return 0;
}