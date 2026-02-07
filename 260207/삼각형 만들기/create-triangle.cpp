#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int N;
int x[100];
int y[100];

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> x[i] >> y[i];
    }

    // Please write your code here.
    int mx=0, my=0;
    for(int i=0; i<N; i++){
        for(int j=i+1; j<N; j++){
            for(int k=j+1; k<N; k++){

                if(x[i]-x[j]==0) my=max(my, abs(y[i]-y[j]));
                else if(y[i]-y[j]==0) mx=max(mx, abs(x[i]-x[j]));

                if(x[i]-x[k]==0) my=max(my, abs(y[i]-y[k]));
                else if(y[i]-y[k]==0) mx=max(mx, abs(x[i]-x[k]));

                if(x[j]-x[k]==0) my=max(my, abs(y[j]-y[k]));
                else if(y[j]-y[k]==0) mx=max(mx, abs(x[j]-x[k]));   

            }
        }
    }
    cout << mx*my;
    return 0;
}