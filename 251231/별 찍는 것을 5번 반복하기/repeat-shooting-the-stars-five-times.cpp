#include <iostream>
using namespace std;

void print10stars(){
    for(int i=0; i<10; i++){
        cout << '*';
    }
    cout << '\n';
}

int main() {
    // Please write your code here.
    for(int i=0; i<5; i++){
        print10stars();
    }
    return 0;
}