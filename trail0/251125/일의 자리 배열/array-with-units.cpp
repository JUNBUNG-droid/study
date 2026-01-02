#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int array[10]={a,b};
    for (int i=0; i<8; i++){
        array[i+2]=(array[i]+array[i+1])%10;
    }
    for (int i=0; i<10; i++){
        cout << array[i]<< " ";
    }
    return 0;
}