#include <iostream>
using namespace std;

int main() {
    char a;
    int cnt=0;
    cin >>a;
    string array[5]={"apple","banana","grape","blueberry","orange"};
    for(int i=0; i<5; i++){
        string in_array=array[i];
        if ((in_array[2]==a)||(in_array[3]==a)){
            cnt++;
            cout << in_array << "\n";
        }
    }
    cout << cnt;
    return 0;
}