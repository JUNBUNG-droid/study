#include <iostream>
#include <climits>

using namespace std;

int N, K, candy, pos;
int map[101]={};

bool isrange(int x){
    return (0<=x&&x<101);
}

int main() {
    cin >> N >> K;

    for (int i = 0; i < N; i++) {
        cin >> candy >> pos;
        map[pos]+=candy;
    }

    // Please write your code here.
    int max=INT_MIN;
    for (int i = 1; i < 101; i++) {
        int p1=i-K, p2=i+K, sum=0;
        if(!isrange(p1)) p1=1;
        if(!isrange(p2)) p2=100;
        for(int j=p1; j<=p2; j++){
            sum+=map[j];
        }
        if(max<sum) max=sum;
    }   
    cout << max;
    return 0;
}