#include <iostream>
#include <vector>

using namespace std;

int N;
string command;
int num;

int main() {
    cin >> N;

    vector<int> v;
    for (int i = 0; i < N; i++) {
        cin >> command;
        if (command == "push_back") {
            cin >> num;
            v.push_back(num);
        }
        else if (command == "pop_back") {
            v.pop_back();
        }
        else if (command == "size") {
            cout << v.size() << "\n";
        }
        else if (command == "get") {
            cin >> num;
            cout << v[num-1] << "\n";
        }
    }

    // Please write your code here.

    return 0;
}
