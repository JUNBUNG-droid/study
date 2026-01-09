#include <iostream>
#include <string>

using namespace std;

string unlock_code;
char wire_color;
int seconds;

class Solve{
    public:
        string code;
        char color;
        int seconds;
    Solve(string code, char color, int seconds){
        this -> code = code;
        this -> color = color;
        this -> seconds = seconds;
    }
};

int main() {
    cin >> unlock_code >> wire_color >> seconds;

    // Please write your code here.
    Solve solve = Solve(unlock_code, wire_color, seconds);
    cout << "code : " << solve.code << "\n";
    cout << "color : " << solve.color << "\n";
    cout << "second : " << solve.seconds << "\n";
    return 0;
}