#include <iostream>
#include <climits>
#include <cmath>

using namespace std;

int n;
int x[100];
int y[100];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }

    // Please write your code here.
    int skip=1;
    int min=INT_MAX;
    while(skip!=n-1){
        int sum=0;
        for(int i=0; i<n-1; i++){
            if(i+1==skip){
                sum+=(abs(x[i]-x[i+2])+abs(y[i]-y[i+2]));
            }
            else if(i==skip) continue;
            else sum+=(abs(x[i]-x[i+1])+abs(y[i]-y[i+1]));
        }
        if(sum<min) min=sum;
        skip++;
    }
    cout << min;
    return 0;
}