#include <iostream>
#include <algorithm>

using namespace std;

int N, B;

//선물의 가격과 배송비의 정보를 묶음
class Present{
    public:
        int P, S;
    Present(int P, int S){
        this->P=P;
        this->S=S;
    }
    Present(){}
};

Present present[1000]={};

//총합을 기준으로 오름차순 총합이 같을 시 가격을 기준으로 내림차순
bool cmp(Present a, Present b){
    if(a.P+a.S==b.P+b.S) return b.P<=a.P;
    return a.P+a.S<=b.P+b.S;
}

int main() {
    cin >> N >> B;

    for (int i = 0; i < N; i++) {
        cin >> present[i].P >> present[i].S;
    }

    //싼 것부터 사줘야 많이 살 수 있으므로 정렬
    sort(present, present+N, cmp);

    //할인 물품 선택(i)
    int max_student=0;
    for (int i=0; i<N; i++) {
        int money=B-(present[i].P/2+present[i].S), cnt=1;
        //돈이 0이 될때 까지 구매
        for(int j=0; j<N; j++){
            int cost=present[j].P;
            if(j==i) continue;
            //더이상 구매 불가 시 break
            if(money-(cost+present[j].S)<0) break; 
            money-=(cost+present[j].S);
            cnt++;

        }
        max_student=max(max_student, cnt);
    }
    cout << max_student;
    return 0;
}