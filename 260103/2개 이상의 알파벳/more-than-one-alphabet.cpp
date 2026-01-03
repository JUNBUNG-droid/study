#include <iostream>
#include <string>

using namespace std;

string A;

bool count(string str){
    int arr[50]={};
    int cnt=0;
    for(int i=0; i<str.length(); i++){
        arr[str[i] - 'a']=1;
    }
    for(int i=0; i<50; i++){
        if(arr[i]==1){
            cnt++;
        }
    }
    return cnt>=2;
}

int main() {
    cin >> A;

    // Please write your code here.
    if(count(A)){
        cout << "Yes";
    }
    else{
        cout << "No";
    }

    return 0;
}