#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int k=1;
	for (int i = 0; i < 2*n-1; i++) {
		for (int j = 0; j < k; j++) {
			cout << "*";
		}
		cout << endl;
		cout << endl;

		if (i < n-1) {
			k++;
		}
		else {
			k--;
		}
	}

	return 0;

}