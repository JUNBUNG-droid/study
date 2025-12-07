#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b;
    int total=0, cnt=0;
    double avg=0;
    cin >> a >> b;
    for(int i=a; i<=b; i++){
        if(i%5==0||i%7==0){
            total+=i;
            cnt++;
        }
    }
    cout << fixed;
    cout.precision(1);
    avg=total;
    avg/=cnt;
    cout << total << " " << avg;
    return 0;
}