#include <iostream>
#include <algorithm>
using namespace std;

int n;
string name[10];
int height[10];
int weight[10];

class Info{
    public:
        string name;
        int height;
        int weight;
    Info(string name, int height, int weight){
        this -> name = name;
        this -> height = height;
        this -> weight = weight;
    }
    Info(){}
};

bool cmp(Info a, Info b){
    if(a.height!=b.height){
        return a.height<b.height;
    }
    if(a.weight!=b.weight){
        return a.weight>b.weight;
    }
}

Info info[10];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> name[i] >> height[i] >> weight[i];
        info[i]=Info(name[i],height[i],weight[i]);
    }

    // Please write your code here.
    sort(info, info+n, cmp);
    for (int i = 0; i < n; i++) {
        cout << info[i].name << " " << info[i].height << " " << info[i].weight << "\n";
    }

    return 0;
}