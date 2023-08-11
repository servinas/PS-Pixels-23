/*link to the problem:
 *https://vjudge.net/problem/SPOJ-MINSTOCK/origin
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
    string x;
    int y;
    int type;
    map<string, int> mp;
    set<pair<int, string>> st;
    for (int i = 0; i < n; ++i) {
        cin >> type;
        if (type == 1) {
            //price of x =y
            cin >> x >> y;
            mp[x] = y;
            st.insert({y, x});
        } else if (type == 2) {
            //price of x changed to y
            cin >> x >> y;
           if(mp[x]!=-1) {
                auto it = st.find({y, x});
                st.erase(*it);
            }
            mp[x] = y;
            st.insert({y, x});

        } else {
            cin >> x;
            //buy
            // cout<<endl;
            auto it = st.begin();
            cout << it->second << " " << i + 1 << endl;
            mp.erase(it->second);
            st.erase(it);

        }
    }
    return 0;
}
