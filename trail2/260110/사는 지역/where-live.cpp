#include <iostream>
#include <algorithm>
#define MAX_N 10

using namespace std;

int n;
string name[MAX_N], street_address[MAX_N], region[MAX_N];

class Info{
    public:
        string name;
        string address;
        string region;
    Info(string name, string address, string region){
        this -> name=name;
        this -> address=address;
        this -> region=region;
    }
    Info(){}
};

Info info[MAX_N];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> name[i];
        cin >> street_address[i];
        cin >> region[i];
        info[i]=Info(name[i],street_address[i],region[i]);
    }
    string arr[MAX_N]={};
    for(int i=0; i<n; i++){
        arr[i]=name[i];
    }
    sort(arr, arr+n);

    for(int i=0; i<n; i++){
        if(info[i].name==arr[n-1]){
            cout << "name " << info[i].name << '\n';
            cout << "addr " << info[i].address << '\n';
            cout << "city " << info[i].region << '\n';
        }
    }
    

    return 0;
}