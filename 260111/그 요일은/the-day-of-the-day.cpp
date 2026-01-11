#include <iostream>

using namespace std;

int m1, m2, d1, d2;
string A;

int main() {
    cin >> m1 >> d1 >> m2 >> d2;
    cin >> A;
    int day[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
    string week[7]={"Mon","Tue","Wed","Thu","Fri","Sat","Sun"};
    // Please write your code here.
    int case1=d1, case2=d2;
    for(int i=0; i<m1; i++){
        case1+=day[i];
    }
    for(int i=0; i<m2; i++){
        case2+=day[i];
    }
    int a=case2-case1;
    int cnt=0;
    for(int i=0; i<=a; i++){
        if(week[i%7]==A){
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}