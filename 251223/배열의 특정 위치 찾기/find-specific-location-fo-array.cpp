#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[10], sum1=0, sum2=0;
    for(int i=0; i<10; i++){
        cin >> arr[i];
    }
    for(int i=0; i<10; i++){
        if((i+1)%2==0){
            sum1+=arr[i];
        }
    }   
    for(int i=0; i<10; i++){
        if((i+1)%3==0){
            sum2+=arr[i];
        }
    }  
    cout << fixed;
    cout.precision(1);
    cout << sum1 << " " << (double)sum2/3;
    return 0;
}