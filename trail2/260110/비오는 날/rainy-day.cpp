#include <iostream>
#include <string>

using namespace std;

int n;
string date[100];
string day[100];
string weather[100];

class Today{
    public:
        string date;
        string day;
        string weather;
    Today(string date, string day, string weather){
        this ->date = date;
        this ->day = day;
        this ->weather = weather;
    }
    Today(){};
};

Today t[100];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> date[i] >> day[i] >> weather[i];
        t[i]=Today(date[i], day[i], weather[i]);
    }

    // Please write your code here.
    int idx=0;
    for (int i = 0; i < n; i++) {
        if(t[i].weather=="Rain"){
            idx=i;
            break;
        }
    }
    for (int i = 0; i < n; i++) {
        if(t[i].weather=="Rain"){
            if(t[i].date<t[idx].date){
                idx=i;
            }
        }
    }

    cout << t[idx].date << " " << t[idx].day << " " << t[idx].weather;

    return 0;
}