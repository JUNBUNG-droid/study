#include <iostream>
#include <algorithm>

using namespace std;

int X, Y;

bool cmp(char a, char b){
    return a>b;
}

bool number(int n){
    int num[10]={};
    while(n>0){
        num[n%10]++;
        n/=10;
    }
    int interest=0;
    int kind=0;
    for(int i=0; i<10; i++){
        if(num[i]==0) continue;
        if(num[i]==1){
            kind++;
            interest++;
        }
        else kind++;
    }
    return interest==1&&kind==2;
}

int main() {
    cin >> X >> Y;

    // Please write your code here.
    int cnt=0;
    for(int i=X; i<=Y; i++){
        if(number(i)) cnt++;
    }
    cout << cnt;
    return 0;
}