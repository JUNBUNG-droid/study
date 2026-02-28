#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int n;
string name[10];
int korean[10];
int english[10];
int math[10];

class Info{
    public:
        string name;
        int korean, english, math;
    Info(string name, int korean, int english, int math){
        this -> name = name;
        this -> korean = korean;
        this -> english = english;
        this -> math = math;
    }
    Info(){}
};

bool cmp(Info a, Info b){
    if(a.korean!=b.korean){
        return a.korean > b.korean;
    }
    if(a.english!=b.english){
        return a.english > b.english;
    }
    return a.math > b.math;
}

Info info[10];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> name[i];
        cin >> korean[i];
        cin >> english[i];
        cin >> math[i];
        info[i] = Info(name[i],korean[i],english[i],math[i]);
    }

    // Please write your code here.
    sort(info, info+n, cmp);
    for (int i = 0; i < n; i++) {
        cout << info[i].name << " " << info[i].korean << " " << info[i].english << " " << info[i].math << "\n";
    }

    return 0;
}