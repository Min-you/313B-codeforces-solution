#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    string s;
    cin >> s;
    int n, cnt = 0, dp[100000];
    cin >> n;
    for (int i = 1; i < s.size(); ++i){
        if(s[i]==s[i-1]){
            cnt++;
        }
        dp[i]= cnt;
    }
    while(n--){
        int r, l;
        cin>>l>>r;
        cout<<dp[r-1]-dp[l-1]<<endl;
    }
}