#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    double arr[10], n, sum=0;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        sum+=arr[i];
    }
    cout << fixed;
    cout.precision(1);
    double avg = (double)sum/n;
    cout << avg << "\n";
    if(avg>=4.0){
        cout << "Perfect";
    }
    else if(avg>=3.0){
        cout << "Good";
    }
    else{
        cout << "Poor";
    }
    return 0;
}