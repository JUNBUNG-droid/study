#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    char a;
    int b,total=0;
    for(int i=0; i<3; i++){
        cin >> a >> b;
        if (a=='Y'){
            if(b>=37){
                total+=1;
            }
        }
    }
    if (total>=2){
        cout << 'E';
    }
    else{
        cout << 'N';
    }
    return 0;
}