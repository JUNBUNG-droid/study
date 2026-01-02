#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string s;
    int q;
    cin >> s >> q;
    for(int i=0; i<q; i++){
        int n;
        cin >> n;
        if(n==1){
            int a,b;
            char temp;
            cin >> a >> b;
            temp=s[b-1];
            s[b-1]=s[a-1];
            s[a-1]=temp;
            cout << s << "\n";
        }
        else if(n==2){
            char x, y;
            cin >> x >> y;
            for(int j=0; j<s.length(); j++){
                if(s[j]==x){
                    s[j]=y;
                }
            }
            cout << s << "\n";
        }
    }
    return 0;
}