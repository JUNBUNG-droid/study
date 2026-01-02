
#include <iostream>
#include <string>
using namespace std;

int main() {

	string arr;
	cin >> arr;
	int len = arr.length();
    int a,b=0;
    cin >> a;
    if(len<a){
        b=0;
    }
    else{
        b=len-a;
    }
	for (int i = len-1; i >= b; i--) {
		cout << arr[i];
	}

	return 0;

}