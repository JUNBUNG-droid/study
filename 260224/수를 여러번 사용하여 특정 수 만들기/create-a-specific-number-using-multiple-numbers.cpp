#include <iostream>

using namespace std;

int A, B, C;

int main() {
    cin >> A >> B >> C;

    // Please write your code here.
    int max_sum=0, plusA=0;
    while(true){
        int sum=0;
        for(int i=0; i<plusA; i++) sum+=A;
        if(sum>C) break;

        while(sum<=C){
            sum+=B;
        }
        sum-=B;
        
        if(max_sum < sum) max_sum=sum;
        plusA++;
    }
    cout << max_sum;
    return 0;
}