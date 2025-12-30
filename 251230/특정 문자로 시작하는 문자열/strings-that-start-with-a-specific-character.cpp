#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, cnt=0, sum=0;;
    char a;
    string arr[20];
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    cin >> a;
    for(int i=0; i<n; i++){
        if(arr[i][0]==a){
            cnt++;
            sum+=arr[i].length();
        }
    }    
    cout << fixed;
    cout.precision(2);
    cout << cnt << " " << (double)sum/cnt;
    return 0;
}