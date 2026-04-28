#include <iostream>
#include <deque>
using namespace std;

int N;
deque<int> d;

int main() {
    cin >> N;

    // Please write your code here.
    for(int i=1; i<=N; i++){
        d.push_back(i);
    }
    while(d.size()!=1){
        d.pop_front();
        int a=d.front();
        d.pop_front();
        d.push_back(a);
    }
    cout<<d[0];
    return 0;
}
