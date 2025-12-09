#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int sum=0,cnt=0;
    while(true){
        int age;
        cin >> age;
        if(age>=30&&a<20){
            break;
        }
        sum+=age;
        cnt++;
    }
    cout << fixed;
    cout.precision(2);
    cout << (double)sum/cnt;
    return 0;
}