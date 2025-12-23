#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    double arr[10], sum=0;
    for(int i=0; i<8; i++){
        cin >> arr[i];
        sum+=arr[i];
    }
    cout << fixed;
    cout.precision(1);
    cout << sum/8;
    return 0;
}