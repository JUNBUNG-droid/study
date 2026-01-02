#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr1[100], arr2[100], n, j=0;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> arr1[i];
        if(arr1[i]%2==0){
            arr2[j]=arr1[i];
            j++;
        }
    }
    for(int k=0; k<j; k++){
        cout << arr2[k] << " ";
    }
    return 0;
}