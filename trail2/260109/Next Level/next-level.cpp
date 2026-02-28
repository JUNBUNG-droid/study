#include <iostream>
#include <string>

using namespace std;

string user2_id;
int user2_level;

class Info{
    public:
        string id;
        int lv;
        Info(string id="codetree", int lv=10){
            this->id=id;
            this->lv=lv;
        }
};

int main() {
    cin >> user2_id >> user2_level;
    Info a = Info();
    cout << "user " << a.id << " lv " << a.lv << "\n";
    // Please write your code here.
    a.id=user2_id;
    a.lv=user2_level;
    cout << "user " << a.id << " lv " << a.lv;
    return 0;
}