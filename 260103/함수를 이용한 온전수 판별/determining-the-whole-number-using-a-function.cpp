#include <iostream>

using namespace std;

int a, b;

bool cal1(int n){
    return n%2==0;
}

bool cal2(int n){
    return n%10==5;
}

bool cal3(int n){
    return n%3==0&&n%9!=0;
}

int cal(int a, int b){
    int cnt=0;
    for(int i=a; i<=b; i++){
        if(!cal1(i)&&!cal2(i)&&!cal3(i)){
            cnt++;
        }
    }
    return cnt;
}

int main() {
    cin >> a >> b;

    // Please write your code here.
    cout << cal(a,b);

    return 0;
}