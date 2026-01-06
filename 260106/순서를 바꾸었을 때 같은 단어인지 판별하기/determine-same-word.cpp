#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string word1;
string word2;

int main() {
    cin >> word1;
    cin >> word2;

    // Please write your code here.
    sort(word1.begin(),word1.end());
    sort(word2.begin(),word2.end());

    bool match=true;
    for(int i=0; i< word1.length(); i++){
        if(word1[i]!=word2[i]){
            match=false;
        }
    }
    if(match){
        cout << "Yes";
    }
    else{
        cout << "No";
    }

    return 0;
}
