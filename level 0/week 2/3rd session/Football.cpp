/*link to the problem:
 * https://codeforces.com/problemset/problem/43/A
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
    int n;
    cin >> n;
    string s;
    map<string, int> mp;
    for (int i = 0; i < n; ++i) {
        cin>>s;
        mp[s]++;
    }
    int mx=0;
    string win;
    for(auto i:mp){
        if(mx<i.second){
            win=i.first;
            mx=i.second;
        }
    }
    cout<<win;
    return 0;
}
