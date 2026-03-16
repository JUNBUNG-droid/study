#include <iostream>
#include <vector>

using namespace std;

int n;
int arr[100000];

void RadixSort(){
    int p = 1;
    for(int i=0; i<6; i++){
        vector<int> v[10];
        for(int j=0; j<n; j++){
            int digit = (arr[j]/p)%10;
            v[digit].push_back(arr[j]);
        }
        int idx=0;
        for(int j=0; j<10; j++){
            for(int k=0; k<v[j].size(); k++){
                arr[idx++] = v[j][k]; 
            }
        }
        p*=10;
    }
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    RadixSort();

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
