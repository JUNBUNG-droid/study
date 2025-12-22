#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        int a, b, total=0;
        cin >> a >> b;
        for(int j=a; j<=b; j++){
            if(j%2==0){
                total+=j;
            }
        }
        cout << total << "\n";
    }
    return 0;
}