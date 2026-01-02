#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int total=0,cnt=0;
    double avg=0;
    for(int i=0;i<10;i++){
        int a;
        cin >> a;
        if(a>=0&&a<=200){
            total+=a;
            cnt++;
        }
    }
    cout << fixed;
    cout.precision(1);
    avg=(double)total/cnt;
    cout << total << " " << avg;
    return 0;
}