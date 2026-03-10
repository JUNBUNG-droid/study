#include <iostream>
#include <vector>

using namespace std;

int K, N;
vector<int> v;

void choose(int a){
    if(a==N){
        for(int i=0; i<v.size(); i++){
            cout << v[i] << " ";
        }
        cout << "\n";
        return;
    }

    for(int i=1; i<=K; i++){
        v.push_back(i);
        choose(a+1);
        v.pop_back();
    } 
}

int main() {
    cin >> K >> N;

    // Please write your code here.
    choose(0);

    return 0;
}
