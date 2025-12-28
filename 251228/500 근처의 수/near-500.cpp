#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a[1000]={};

    for(int i=0; i<10; i++){
        cin >> a[i];
    }

    int max=0, min=0;
    for(int i=1; i<10; i++){
        if(a[i]>a[max]){
            max=i;
        }
    }
    for(int i=1; i<10; i++){
        if(a[i]<a[min]){
            min=i;
        }
    }

    for(int i=0; i<10; i++){
        if(a[i]>a[min]&&500>a[i]){
            min=i;
        }
        if(a[i]<a[max]&&500<a[i]){
            max=i;
        }
    }
    cout << a[min] << " " << a[max];
    return 0;
}