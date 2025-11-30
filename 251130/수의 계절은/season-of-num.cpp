#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a;
    cin >> a;
    if (a>=3 && a<=5){
        cout << "Spring";
    }
    else if (a>=6 && a<=8){
        cout << "Summer";
    }
    else if (a>=9 && a<=11){
        cout << "Fall";
    }
    else if (a<=12){
        cout << "Winter";
    }
    return 0;
}