#include <iostream>

using namespace std;

string input_str;
int q;

int main() {
    cin >> input_str >> q;
    int len = input_str.length();
    for (int i = 0; i < q; i++) {
        int query_type;
        cin >> query_type;
        if(query_type==1){
            input_str=input_str.substr(1,len-1)+input_str.substr(0,1);
        }
        else if(query_type==2){
            input_str=input_str.substr(len-1,1)+input_str.substr(0,len-1);
        }
        else if(query_type==3){
			int mid=len/2;
			string str="";
            for(int j=len-1; j>=mid; j--){
				str+=input_str[j];
			}
            for(int j=mid-1; j>=0; j--){
				str+=input_str[j];
			}
			input_str=str;
        }
        cout << input_str << "\n";
    }

    return 0;
}
