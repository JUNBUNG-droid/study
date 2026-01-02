#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    char arr[6]={'L','E','B','R','O','S'};
    char a;
    cin >> a;
    int b=-1;
    for(int i=0; i<6; i++){
        if(arr[i]==a){
            b=i;
        }
    }
    if(b==-1){
        cout << "None";
    }
    else{
        cout << b;
    }
    return 0;
}