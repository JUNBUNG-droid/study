#include <iostream>
using namespace std;

int main() {

	int arr_2d[4][4] = {};
	int n,m,num=1;
    cin >> n >> m;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
            arr_2d[i][j]=num;
            cout << arr_2d[i][j] << " ";
            num++;
		}
		cout << endl;
	}

	return 0;

}