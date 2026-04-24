#include <iostream>
#include <vector>
#include <climits>
using namespace std;

vector<char> alpha;
string str;
bool used[6];
int temp[6];
int ans=INT_MIN;

void dfs(int idx){
    if(idx==alpha.size()){
        int sum=temp[str[0]-'a'];
        for(int i=1; i<str.length(); i+=2){
            char op=str[i];
            if(op=='+'){
                sum+=temp[str[i+1]-'a'];
            }
            else if(op=='-'){
                sum-=temp[str[i+1]-'a'];
            }
            else if(op=='*'){
                sum*=temp[str[i+1]-'a'];
            }
        }
        if(ans<sum) ans=sum;
        return;
    }
    for(int i=1; i<=4; i++){
        temp[alpha[idx]]=i;
        dfs(idx+1);
    }
}

int main() {
    // Please write your code here.
    cin>>str;
    for(int i=0; i<str.length(); i++){
        if('a'<=str[i]&&str[i]<='f'){
            if(used[str[i]-'a'] == false)
            {
                used[str[i]-'a'] = true;
                alpha.push_back(str[i]-'a');
            }
        }
    }
    dfs(0);
    cout<<ans;
    return 0;
}