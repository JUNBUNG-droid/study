#include <iostream>
using namespace std;

int line[200]={};

int max_h(){
    int max = line[0];
    for(int i=1; i<200; i++){
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
        int x1, x2, move;
        cin >> x1 >> x2;
        x1+=100;
        x2+=100;
        for(int j=x1; j<x2; j++){
            line[j]++;
        }
    }
    cout << max_h();
    return 0;
}