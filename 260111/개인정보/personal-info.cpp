#include <iostream>
#include <algorithm>
using namespace std;

string name[5];
int height[5];
double weight[5];

class Info{
    public:
        string name;
        int height;
        double weight;
    Info(string name, int height, double weight){
        this -> name = name;
        this -> height = height;
        this -> weight = weight;
    }
    Info(){}
};

bool cmp1(Info a, Info b){
    return a.name<b.name;
}

bool cmp2(Info a, Info b){
    return a.height>b.height;
}

Info info[5];

int main() {
    for (int i = 0; i < 5; i++) {
        cin >> name[i] >> height[i] >> weight[i];
        info[i]=Info(name[i],height[i],weight[i]);
    }

    // Please write your code here.
    sort(info, info+5, cmp1);
    cout << fixed;
    cout.precision(1);
    cout << "name" << "\n";
    for (int i = 0; i < 5; i++) {
        cout << info[i].name << " " << info[i].height << " " << info[i].weight << "\n";
    }
    sort(info, info+5, cmp2);
    cout << "\n" << "height" << "\n";
    for (int i = 0; i < 5; i++) {
        cout << info[i].name << " " << info[i].height << " " << info[i].weight << "\n";
    }
    return 0;
}