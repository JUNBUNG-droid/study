#include <iostream>

using namespace std;

int M, D;

void cal(int a, int b){
    if(a==1||a==3||a==5||a==7||a==8||a==10||a==12){
        if(b<=31){
            cout << "Yes";
        }
        else{
            cout << "No";
        }
    }
    else if(a==4||a==6||a==9||a==11){
        if(b<31){
            cout << "Yes";
        }
        else{
            cout << "No";
        }
    }
    else if(a==2){
        if(b<=28){
            cout << "Yes";
        }
        else{
            cout << "No";
        }
    }
    else{
        cout << "No";
    }
}

int main() {
    cin >> M >> D;

    // Please write your code here.
    cal(M,D);

    return 0;
}