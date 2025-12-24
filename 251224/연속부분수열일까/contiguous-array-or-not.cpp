#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n1, n2;
    bool a = false;
    int arr1[100]={}, arr2[100]={};
    cin >> n1 >> n2;
    for(int i=0; i<n1; i++){
        cin >> arr1[i];
    }
    for(int i=0; i<n2; i++){
        cin >> arr2[i];
    }
    for(int i=0; i<=n1-n2; i++){
        int cnt=0;
        for(int j=0; j<n2; j++){
            if(arr1[j+i]==arr2[j]){
                cnt++;
            }
            else{
                break;
            }
            if(cnt==n2){
                a=true;
                break;
            }
        }
    }
    if(a){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
    return 0;
}