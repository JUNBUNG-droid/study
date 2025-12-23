#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[100]={},a,b,c,sum=0;
    cin >> a >> b;
    while(a>1){
        c=a%b;
        a/=b;
        arr[c]++;
    }
    for(int i=0; i<10; i++){
        sum+=arr[i]*arr[i];
    }
    cout << sum;
    return 0;
}