#include <iostream>

using namespace std;

int N;
int arr[1000];

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    int cnt=0, max=0;
    for (int i = 0; i < N; i++) {
        if(i==0||arr[i]==arr[i-1]){
            cnt++;
        }
        else{
            if(cnt>max){
                max=cnt;
            }
            cnt=1;
        }
    }
    cout << max;
    return 0;
}