#include <iostream>

using namespace std;

string A, B;

int main() {
    cin >> A;
    cin >> B;

    // Please write your code here.
    while(true){
		bool is_escape = true;
        for(int i=0; i<A.length(); i++){
			bool is_match = true;
            if(i+B.length()-1>A.length()-1){
                break;
            }
            for(int j=0; j<B.length(); j++){
                if(A[i+j]!=B[j]){
                    is_match = false;
                }
            }
            if(is_match){
                A.erase(i,B.length());
				is_escape = false;
				break;
            }
        }
        if(is_escape||A.length()==0){
            break;
        }
    }
    cout << A;
    return 0;
}
