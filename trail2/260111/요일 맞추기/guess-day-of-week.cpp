#include <iostream>

using namespace std;

int m1, d1, m2, d2;

int main() {
    cin >> m1 >> d1 >> m2 >> d2;
    int day[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    // Please write your code here.
    int case1=d1, case2=d2;
    for(int i=0; i<m1; i++){
        case1+=day[i];
    }
    for(int i=0; i<m2; i++){
        case2+=day[i];
    }
    string week[7]={"Mon","Tue","Wed","Thu","Fri","Sat","Sun"};
    int a=(case2-case1)%7;
    if(a<0){
        a=7+a;
    }
    cout << week[a];
    return 0;
}