#include <iostream>

using namespace std;

int y;

bool year(int n){
    return n%4==0&&(n%100!=0||n%400==0);
}

int main() {
    cin >> y;

    // Please write your code here.
    if(year(y)){
        cout << "true";
    }
    else{
        cout << "false";
    }

    return 0;
}