#include <iostream>

using namespace std;

int N;

void printnum(int n){
    int num=1;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(num==10){
                num=1;
            }
            cout << num << " ";
            num++;
        }
        cout << '\n';
    }
}

int main() {
    cin >> N;

    // Please write your code here.
    printnum(N);

    return 0;
}