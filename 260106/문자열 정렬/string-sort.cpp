#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

string str;

int main() {
    cin >> str;
    sort(str.begin(), str.end());
    // Please write your code here.
    cout << str;

    return 0;
}