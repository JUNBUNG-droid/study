#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string str[5]={"apple","banana","grape","blueberry","orange"};
    char a;
    int cnt=0;
    cin >> a;
    for(int i=0; i<5; i++){
        if(str[i][2]==a||str[i][3]==a){
            cout << str[i];
            cnt++;
            cout << "\n";
        }
    }
    cout << cnt;
    return 0;
}