#include <iostream>
#include <algorithm>

using namespace std;

int N, K, P, T;

class People{
    public:
        int count, infect;
    People(int count, int infect){
        this->count=count;
        this->infect=infect;
    }
    People(){}
};

class Info{
    public:
        int time, a, b;
    Info(int time, int a, int b){
        this->time=time;
        this->a=a;
        this->b=b;
    }
    Info(){}
};

Info info[251];
People people[251];

bool cmp(Info a, Info b){
    return a.time < b.time;
}

int main() {
    cin >> N >> K >> P >> T;

    // Please write your code here.
    for (int i = 0; i < T; i++){
        int t, x, y;
        cin >> t >> x >> y;
        info[i]={t,x,y};
    }
    sort(info, info+T, cmp);
    for(int i=1; i<=N; i++){
        if(i==P){
            people[i]={K,1};
        }
        else{
            people[i]={0,0};
        }
    }
    for(int i=0; i<T; i++){
        if(people[info[i].a].infect==1&&people[info[i].b].infect==1){
            if(people[info[i].a].count==0&&people[info[i].b].count==0){
                continue;
            }
            else if(people[info[i].a].count==0){
                people[info[i].b].count--; 
            }
            else if(people[info[i].b].count==0){
                people[info[i].a].count--; 
            }
            else{
                people[info[i].a].count--;
                people[info[i].b].count--; 
            }
        }
        else if(people[info[i].a].infect==1){
            if(people[info[i].a].count==0){
                continue;
            }
            people[info[i].a].count--;
            people[info[i].b].count=K;
            people[info[i].b].infect=1;            
        }
        else if(people[info[i].b].infect==1){
            if(people[info[i].b].count==0){
                continue;
            }
            people[info[i].a].count=K;
            people[info[i].a].infect=1;
            people[info[i].b].count--;        
        }
    }
    for(int i=1; i<=N; i++){
        cout << people[i].infect;
    }
    return 0;
}