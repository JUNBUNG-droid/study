#include <iostream>
using namespace std;

int line[100]={};

int max_h(){
    int max = line[0];
    for(int i=1; i<100; i++){
        if(max<line[i]){
            max=line[i];
        }
    }
    return max;
}

int main() {
    // Please write your code here.
    int N;
    cin >> N;

    for(int i=0; i<N; i++){
        int x1, x2;
        cin >> x1 >> x2;
        if(x1<0){
            x1-=x1;
            x2-=x1;
        }
        for(int j=x1; j<x2; j++){
            line[j-1]++;
        }
    }
    cout << max_h();
    return 0;
}