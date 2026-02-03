#include <iostream>
#include <climits>

using namespace std;

int N;
int arr[20][20];

int main() {
    cin >> N;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++) cin >> arr[i][j];

    // Please write your code here.
    int max=INT_MIN;
    if(N<6){
        for(int i=0; i<N; i++){
            for(int j=0; j<N-2; j++){
                for(int k=i+1; k<N; k++){
                    for(int l=0; l<N-2; l++){
                        int sum=0;
                        sum+=(arr[i][j]+arr[i][j+1]+arr[i][j+2]);
                        sum+=(arr[k][l]+arr[k][l+1]+arr[k][l+2]);
                        if(max<sum){
                            max=sum;
                            sum=0;
                        } 
                    }
                }
            }
        }
    }
    else{
        for(int k=0; k<N; k++){
            int a=0;
            for(int j=0; j<N-5; j++){
                a+=arr[k][j]+arr[k][j+1]+arr[k][j+2];
                for(int i=j+3; i<N-2; i++){
                    a+=arr[k][i]+arr[k][i+1]+arr[k][i+2];
                }
            }
            if(max<a) max=a;
        }
        for(int i=0; i<N; i++){
            for(int j=0; j<N-2; j++){
                for(int k=i+1; k<N; k++){
                    for(int l=0; l<N-2; l++){
                        int sum=0;
                        sum+=(arr[i][j]+arr[i][j+1]+arr[i][j+2]);
                        sum+=(arr[k][l]+arr[k][l+1]+arr[k][l+2]);
                        if(max<sum){
                            max=sum;
                            sum=0;
                        } 
                    }
                }
            }
        }
    }        
    cout << max;
    return 0;
}