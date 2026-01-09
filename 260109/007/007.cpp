#include <iostream>
#include <string>

using namespace std;

string secret_code;
char meeting_point;
int meeting_time;


class Promise{
    public:
        string s;
        char m;
        int t;

    Promise(string secret_code, char meeting_point, int meeting_time){
        this -> s = secret_code;
        this -> m = meeting_point;
        this -> t = meeting_time;        
    }
};

int main() {
    cin >> secret_code >> meeting_point >> meeting_time;

    // Please write your code here.
    Promise promise1 = Promise(secret_code,meeting_point, meeting_time);
    cout << "secret code : " << promise1.s << '\n';
    cout << "meeting point : " << promise1.m << '\n';    
    cout << "time : " << promise1.t << '\n';

    return 0;
}