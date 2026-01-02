#include <iostream>

using namespace std;

int n;

void a(int n){
    int sum=n%10+n/10;
    if(n%2==0&&sum%5==0){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
}

int main() {
    cin >> n;

    // Please write your code here.
    a(n);

    return 0;
}