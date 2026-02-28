#include <iostream>

using namespace std;

int X, Y;

int main() {
    cin >> X >> Y;

    // Please write your code here.
    int max_n=0, ans;
    for(int i=X; i<=Y; i++){
        int temp = i;
        int sum = 0;

        while(temp > 0) {
            sum += temp % 10;  
            temp /= 10;      
        }
        if(max_n < sum) max_n = sum;
    }
    
    cout << max_n;

    return 0;
}