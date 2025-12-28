#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a[1000]={};

    for(int i=0; i<10; i++){
        cin >> a[i];
    }

    int max=0;
    for(int i=1; i<10; i++){
        if(a[i]>a[max]){
            max=i;
        }
    }

    int max_idx=0, min_idx=0;
    for(int i=1; i<10; i++){
        if(a[i]>a[max_idx]&&500>a[i]){
            max_idx=i;
        }
        if(a[i]<a[max]&&500<a[i]){
            min_idx=i;
        }
    }
    cout << a[max_idx] << " " << a[min_idx];
    return 0;
}