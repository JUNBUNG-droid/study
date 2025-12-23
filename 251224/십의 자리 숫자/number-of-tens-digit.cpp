#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[100]={};
    for(int i=0; i<100; i++){
        int a;
        cin >> a;
        if(a==0){
            break;
        }
        arr[a/10]++;
    }
    for(int i=1; i<10; i++){
        cout << i << " - " << arr[i] << "\n";
    }
    return 0;
}