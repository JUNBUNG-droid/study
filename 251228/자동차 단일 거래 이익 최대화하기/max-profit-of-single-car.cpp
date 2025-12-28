#include <iostream>

using namespace std;

int n, idx=0;
int price[1000];
int income[1000]={};

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> price[i];
    }

    // Please write your code here.
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if(price[j]-price[i]>0) {
                income[idx]=price[j]-price[i];
                idx++;
            }
        }
    }
    int max=0;
    for (int i=0; i<1000; i++){
        if(income[i]>income[max]){
            max=i;
        }
    }   
    cout << income[max];

    return 0;
}
