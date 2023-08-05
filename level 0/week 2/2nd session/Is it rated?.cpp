/*link to the problem:
 * https://codeforces.com/problemset/problem/807/A
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
    cin>>n;
    vector<pair<int,int>>a(n);
    bool israted=0;
    for (int i = 0; i < n; ++i) {
        cin>>a[i].first>>a[i].second;
        if(a[i].first!=a[i].second){
            israted=1;
        }
    }
    if(israted){
        return cout<<"rated",0;
    }
    bool unrated=0;
    for (int i = 0; i < n; ++i) {
        for (int j = i+1; j < n; ++j) {
            if(a[i].first<a[j].first){
                unrated=1;
            }
        }
    }
    if(unrated)cout<<"unrated";
    else cout<<"maybe";
    return 0;
}
