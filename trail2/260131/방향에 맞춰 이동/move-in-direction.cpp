#include <iostream>

using namespace std;

int n;
char dir[100];
int dist[100];

int dx[4]={-1,1,0,0};
int dy[4]={0,0,1,-1};

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> dir[i] >> dist[i];
    }

    // Please write your code here.
    int x=0, y=0;
    for(int i=0; i<n; i++){
        if(dir[i]=='N'){
            x+=dx[2]*dist[i];
            y+=dy[2]*dist[i];
        }
        else if(dir[i]=='S'){
            x+=dx[3]*dist[i];
            y+=dy[3]*dist[i];  
        }
        else if(dir[i]=='W'){
            x+=dx[0]*dist[i];
            y+=dy[0]*dist[i];              
        }
        else if(dir[i]=='E'){
            x+=dx[1]*dist[i];
            y+=dy[1]*dist[i];              
        }
    }
    cout << x << " " << y;
    return 0;
}