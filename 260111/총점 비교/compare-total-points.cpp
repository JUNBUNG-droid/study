#include <iostream>
#include <algorithm>
using namespace std;

int n;
string name[10];
int score1[10];
int score2[10];
int score3[10];

class Info{
    public:
        string name;
        int score1, score2, score3;
    Info(string name, int score1, int score2, int score3){
        this -> name = name;
        this -> score1 = score1;
        this -> score2 = score2;
        this -> score3 = score3;
    }
    Info(){}
};

bool cmp(Info a, Info b){
    return a.score1+a.score2+a.score3 < b.score1+b.score2+b.score3;
}

Info info[10];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> name[i];
        cin >> score1[i];
        cin >> score2[i];
        cin >> score3[i];
        info[i]=Info(name[i],score1[i],score2[i],score3[i]);
    }

    // Please write your code here.
    sort(info, info+n, cmp);
    for (int i = 0; i < n; i++) {
        cout << info[i].name << " " << info[i].score1 << " " << info[i].score2 << " " << info[i].score3 << "\n";
    }

    return 0;
}