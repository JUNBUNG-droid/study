#include <iostream>

using namespace std;

int Y, M, D;

bool Judge(int n){
    return n%4==0&&(n%100!=0||n%400==0);
}

int LastDayNumber(int n, int m) {
    if(Judge(n)&&m==2){
        return 29;
    }
    else if(m==2){
        return 28;
    }
    else if(m == 4 || m == 6 || m == 9 || m == 11){
        return 30;
    }
    return 31;
}

void Season(int a, int b, int c){
    if(b <= 12 && c <= LastDayNumber(a, b)){
        if(b>=3&&b<=5){
            cout << "Spring";
        }    
        else if(b>=6&&b<=8){
            cout << "Summer";
        }
        else if(b>=9&&b<=11){
            cout << "Fall";
        }
        else{
            cout << "Winter";
        }
    }
    else{
        cout << -1;
    }
}

int main() {
    cin >> Y >> M >> D;

    // Please write your code here.
    Season(Y,M,D);

    return 0;
}