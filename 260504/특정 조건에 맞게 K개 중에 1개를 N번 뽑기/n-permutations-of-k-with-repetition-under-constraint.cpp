#include <iostream>
#include <vector>
using namespace std;

int K, N;
vector<int> v;

void choose(int idx){
    if(idx==N){
        for(int i = 0; i < v.size(); i++)
            cout << v[i] << " ";
        cout << "\n";
        return;
    }
    for(int i=1; i<=K; i++){
        if(idx>=2&&i==v[idx-1]&&i==v[idx-2]){
            continue;
        }
        else{
            v.push_back(i);
            choose(idx+1);
            v.pop_back();
        }
    }
}

int main() {
    // Please write your code here.
    cin>>K>>N;
    choose(0);
    return 0;
}