#include <iostream>
#include <climits>

using namespace std;

int n;
int x[100], y[100];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }

    // Please write your code here.
    int min_val=INT_MAX;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            int d=(x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]);
            if(min_val>d) min_val=d;
        }
    }
    cout << min_val;
    return 0;
}