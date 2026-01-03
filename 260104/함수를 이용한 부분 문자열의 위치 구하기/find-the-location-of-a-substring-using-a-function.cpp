#include <iostream>
#include <string>

using namespace std;

string text;
string pattern;

int check(string a, string b){
    int idx=-1;
    for(int i=0; i<=a.length()-b.length(); i++){
        bool same = true;
        for(int j=0; j<b.length(); j++){
            if(a[i+j]!=b[j]){
                same = false;
            }
        }
        if(same){
            idx=i;
            break;
        }
    }
    return idx;
}

int main() {
    cin >> text;
    cin >> pattern;

    // Please write your code here.
    cout << check(text,pattern);

    return 0;
}