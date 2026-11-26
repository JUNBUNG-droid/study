#include <iostream>
#include <cmath>
#include <climits>

using namespace std;

int n;
int A[100];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    // Please write your code here.
    int min=INT_MAX;
    for(int i=0; i<n; i++){
        int sum=0;
        for(int j=0; j<n; j++){
            sum+=abs(i-j)*A[j];
        }
        if(min>sum) min=sum;
    }
    cout << min;
    return 0;
}