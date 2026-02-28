#include <iostream>

using namespace std;

int m1, d1, m2, d2;

int main() {
    cin >> m1 >> d1 >> m2 >> d2;

    // Please write your code here.
    int day[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    int case1=d1, case2=d2;

    for(int i=0; i<m1; i++){
        case1+=day[i];
    }
    for(int i=0; i<m2; i++){
        case2+=day[i];
    }

    cout << case2-case1+1;
    return 0;
}