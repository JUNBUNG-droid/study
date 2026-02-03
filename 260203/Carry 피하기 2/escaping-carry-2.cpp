#include <iostream>

using namespace std;

int n;
string arr[20];
string arr2[20];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    for(int i=0; i<n; i++){
        for(int j=arr[i].length(); j<5; j++){
            arr2[i]+='0';
        }
        arr2[i]+=arr[i];
    }

    int max=-1;
    int a, b, c;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            for(int k=j+1; k<n; k++){
                bool carry=true;
                for(int l=0; l<5; l++){
                    if(arr2[i][l]-'0'+arr2[j][l]-'0'+arr2[k][l]-'0'>=10) carry=false;
                }
                if(carry){
                    a=stoi(arr[i]), b=stoi(arr[j]), c=stoi(arr[k]);
                    if(max<a+b+c) max=a+b+c;
                }
            }
        }
    }
    cout << max;

    return 0;
}