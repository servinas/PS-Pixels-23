/*link to the problem:
 * https://codeforces.com/problemset/problem/707/A
 */

#include<bits/stdc++.h>

using namespace std;
const int OO = 0x3f3f3f3f;

void RUN() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}


int main() {
    RUN();
    int n, m;
    cin >> n >> m;
    char c;
    map<char, int> mp;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> c;
            mp[c]++;
        }
    }
    bool colored=0;
    for (auto i:mp) {
        if(i.first=='B'||i.first=='W'||i.first=='G'){
            continue;
        }else{
            colored=1;
        }
    }
    cout<<((colored)?"#Color":"#Black&White");
    return 0;
}
