#include <iostream>

using namespace std;

int n;
char dir;

class Info{
    public:
        int idxb, idxw;
        char color;

    Info(int idxb=0, int idxw=0, char color=' '){
        this->idxb=idxb;
        this->idxw=idxw;
        this->color=color;
    }
};

Info x[150000];

int main() {
    cin >> n;
    int point = 75000;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a >> dir;
        if(dir=='R'){
            for(int j = 0; j<a; j++){
                x[point].idxb++;
                if(x[point].idxb>=2&&x[point].idxw>=2){
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
                x[point].idxw++;
                if(x[point].idxb>=2&&x[point].idxw>=2){
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
    for(int i=0; i<150000; i++){
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