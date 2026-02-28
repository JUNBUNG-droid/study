#include <iostream>

using namespace std;

int a, b;
string n;

int conv(string n, int a){
    int num=0, k=1;
    for(int i=n.length()-1; i>=0; i--){
        int c = (n[i]-'0')*k;
        num+=c;
        k*=a;
    }
    return num;
}

void conv2(string n, int b){
    int num=conv(n,a);
    string s="";
    while(true){
        if(num<b){
            s+=to_string(num);
            break;
        }
        s+=to_string(num%b);
        num/=b;
    }
    for(int i=s.length()-1; i>=0; i--){
        cout << s[i];
    }
}

int main() {
    cin >> a >> b;
    cin >> n;

    // Please write your code here.
    conv2(n,b);

    return 0;
}