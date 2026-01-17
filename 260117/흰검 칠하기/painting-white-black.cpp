#include <iostream>

using namespace std;

int n;
char dir;

class Info{
    public:
        int idx;
        char color;

    Info(int idx=0, char color=' '){
        this->idx=idx;
        this->color=color;
    }
};

Info x[100000];

int main() {
    cin >> n;
    int point = 50000;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a >> dir;
        if(dir=='R'){
            for(int j = 0; j<a; j++){
                x[point].idx++;
                if(x[point].idx>=4){
                    x[point].color='G';
                }
                else{
                    x[point].color='B';
                }
                point++;
            }
            point--;
        }
        else if(dir=='L'){
            for(int j = 0; j<a; j++){
                x[point].idx++;
                if(x[point].idx>=4){
                    x[point].color='G';
                }
                else{
                    x[point].color='W';
                }
                point--;
            }
            point++;
        }
    }
    int cntb=0, cntw=0, cntg=0;
    for(int i=0; i<100000; i++){
        if(x[i].color=='B'){
            cntb++;
        }
        if(x[i].color=='G'){
            cntg++;
        }
        if(x[i].color=='W'){
            cntw++;
        }
    }
    cout << cntw << " " << cntb << " " << cntg;
    return 0;
}