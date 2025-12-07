#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n,total=0;
    double avg;
    cin >> n;
    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        total += a;
    }
    cout << fixed;
    cout.precision(1);
    avg=(double)total/n;
    cout << total << " " << avg;
    return 0;
}