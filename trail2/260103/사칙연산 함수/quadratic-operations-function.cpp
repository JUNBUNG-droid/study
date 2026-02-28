#include <iostream>

using namespace std;

int a;
int c;
char o;

void cal(int a, int b, char c){
    if(c=='+'){
        cout << a << " + " << b << " = " << a+b;
    }
    else if(c=='-'){
        cout << a << " - " << b << " = " << a-b;
    }
    else if(c=='/'){
        cout << a << " / " << b << " = " << a/b;
    }
    else if(c=='*'){
        cout << a << " * " << b << " = " << a*b;
    }
    else{
        cout << "False";
    }
}

int main() {
    cin >> a >> o >> c;

    // Please write your code here.
    cal(a,c,o);

    return 0;
}