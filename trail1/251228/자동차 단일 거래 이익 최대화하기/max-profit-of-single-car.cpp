#include <iostream>

using namespace std;

int n;
int price[1000];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> price[i];
    }

    // Please write your code here.
    int min=price[0];
    int profit=0;

    for(int i=1; i<n; i++){
        if(price[i]<min){
            min=price[i];
        }
        else{
            if(price[i]-min>profit)
            profit=price[i]-min;
        }
    }
    cout << profit;
    return 0;
}

