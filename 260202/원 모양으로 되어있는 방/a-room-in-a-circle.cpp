#include <iostream>
#include <climits>

using namespace std;

int n;
int a[1003];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Please write your code here.
    int min = INT_MAX;
    for(int i=0; i<n; i++){
        int sum=0;
        for(int j=0; j<n; j++){
            sum+=((j-i+n)%n)*a[j];
        }
        if(min>sum) min=sum;
    }
    cout << min;
    return 0;
}