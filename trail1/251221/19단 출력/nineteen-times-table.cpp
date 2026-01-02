#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    for(int i=1; i<20; i++){
        for(int j=1; j<20; j++){
            if(j%2==0){
                cout << i << " * " << j << " = " << i*j << "\n";
            }
            else{
                if(j<19){
                    cout << i << " * " << j << " = " << i*j << " / ";   
                }
                else{
                    cout << i << " * " << j << " = " << i*j;  
                }             
            }
        }
        cout << "\n";
    }
    return 0;
}