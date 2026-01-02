#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string arr[10]={};
    char a;
    bool is=false;

    for(int i=0; i<10; i++){
        cin >> arr[i];
    }

    cin >> a;

    for(int i=0; i<10; i++){
        if(arr[i][arr[i].length()-1]==a){
            is=true;
            cout << arr[i] << "\n";
        }
    }
    if(!is){
        cout << "None";
    }

    return 0;
}