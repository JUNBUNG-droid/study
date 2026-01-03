#include <iostream>
#include <string>

using namespace std;

string A;

bool a(string str){
    string str2="";
    for(int i=str.length()-1; i>=0; i--){
        str2+=str[i];
    }
    return str==str2;
}

int main() {
    cin >> A;

    // Please write your code here.
    if(a(A)){
        cout << "Yes";
    }
    else{
        cout << "No";
    }

    return 0;
}