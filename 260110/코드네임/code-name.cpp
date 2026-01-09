#include <iostream>

#define MAX_N 5

using namespace std;

char codename[MAX_N];
int score[MAX_N];

class Info{
    public:
        char codename;
        int score;
    Info(char codename=' ', int score=0){
        this -> codename = codename;    
        this -> score = score;
    }
};

int main() {
    for (int i = 0; i < MAX_N; i++) {
        cin >> codename[i] >> score[i];
    }

    // Please write your code here.
    int min=score[0];
    Info info(codename[0], score[0]);
    for (int i = 1; i < MAX_N; i++) {
        if(min>score[i]){
            min=score[i];
            info.codename=codename[i];
            info.score=score[i];
        }
    }
    cout << info.codename << " " << info.score;

    return 0;
}
