#include <iostream>

using namespace std;

int n1, n2;
int a[100], b[100];

bool arr(int arr1[], int size1, int arr2[], int size2){
    bool ok=false;
    for(int i=0; i<size1-size2; i++){
        bool k=true;
        for(int j=0; j<size2; j++){
            if(arr1[i+j]!=arr2[j]){
                k=false;
            }
        }
        if(k){
            ok=true;
            break;
        }
    }
    return ok;
}

int main() {
    cin >> n1 >> n2;

    for (int i = 0; i < n1; i++) cin >> a[i];

    for (int i = 0; i < n2; i++) cin >> b[i];

    // Please write your code here.
    if(arr(a,n1,b,n2)){
        cout << "Yes";
    }
    else{
        cout << "No";
    }

    return 0;
}