#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;

int abilities[6];
int sum=0;
int min_val=INT_MAX;

void getabil(int x, int y, int i, int j){
    int sum1=x+y;
    int sum2, sum3;
    int mx, mn;
    for(int k=0; k<6; k++){
        for(int l=k+1; l<6; l++){
            if(k==i || k==j || l==i || l==j) continue;
            sum2=abilities[k]+abilities[l];
            sum3=sum-sum1-sum2;
            mx = max(sum1, max(sum2, sum3));
            mn = min(sum1, min(sum2, sum3));
            int diff = mx-mn;
            if(min_val>diff) min_val=diff;
        } 
    }
}

int main() {
    for (int i = 0; i < 6; i++) {
        cin >> abilities[i];
        sum+=abilities[i];
    }

    // Please write your code here.
    for(int i=0; i<6; i++){
        for(int j=i+1; j<6; j++){
            getabil(abilities[i],abilities[j], i, j);
        }
    }
    cout << min_val;

    return 0;
}