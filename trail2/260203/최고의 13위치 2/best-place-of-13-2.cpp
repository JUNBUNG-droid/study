#include <iostream>
#include <climits>

using namespace std;

int N;
int arr[20][20];

int main() {
    cin >> N;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            cin >> arr[i][j];

    int max = INT_MIN;

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N-2; j++){
            for(int k = i+1; k < N; k++){
                for(int l = 0; l < N-2; l++){
                    int sum = 0;
                    sum += arr[i][j] + arr[i][j+1] + arr[i][j+2];
                    sum += arr[k][l] + arr[k][l+1] + arr[k][l+2];

                    if(max < sum){
                        max = sum;
                    }
                }
            }
        }
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N-2; j++){
            for(int k = j+3; k < N-2; k++){
                int sum = 0;
                sum += arr[i][j] + arr[i][j+1] + arr[i][j+2];
                sum += arr[i][k] + arr[i][k+1] + arr[i][k+2];

                if(max < sum){
                    max = sum;
                }
            }
        }
    }

    cout << max;
    return 0;
}
