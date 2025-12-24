#include <iostream>

using namespace std;

int N;
int nums[1000];
int count_arr[1000];

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> nums[i];
    }
    // Please write your code here.
    for(int i=0; i<N; i++){
        count_arr[nums[i]]++;
    }
    int a=-1;
    for(int i=N; i>=0; i--){
        if(count_arr[i]==1){
            a=i;
            break;
        }
    }
    cout << a;

    return 0;
}
