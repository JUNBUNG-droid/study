#include <iostream>
#include <climits>
#include <algorithm>
#include <cmath>

using namespace std;

int abilities[6];
int sum=0;

int getabil(int x, int y, int z){
    int sum1=x+y+z;
    int sum2=sum-sum1;

    return abs(sum2-sum1);
}

int main() {
    for (int i = 0; i < 6; i++) {
        cin >> abilities[i];
        sum+=abilities[i];
    }

    // Please write your code here.
    int min_val=INT_MAX;
    for(int i=0; i<6; i++){
        for(int j=i+1; j<6; j++){
            for(int z=j+1; z<6; z++){
                min_val=min(min_val,getabil(i,j,z));
            }
        }
    }
    cout << min_val;

    return 0;
}