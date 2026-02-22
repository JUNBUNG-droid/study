#include <iostream>

using namespace std;

int X, Y;

int main() {
    cin >> X >> Y;

    // Please write your code here.
    int cnt=0;
    for(int i=X; i<=Y; i++){
        string str=to_string(i);
        bool check = true;
        for(int j=0; j<str.length()/2; j++){
            if(str[j]!=str[str.length()-j-1]) check = false;
        }
        if(check) cnt++;
    }
    cout << cnt;
    return 0;
}