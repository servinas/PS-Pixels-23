/*link to the problem:
 * https://codeforces.com/problemset/problem/920/B
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
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        queue<pair<int, int>> q;
        int c, l;
        for (int i = 0; i < n; ++i) {
            cin >> c >> l;
            q.push({c, l});
        }
        int ss = 0;
        while (q.size()) {
            auto i = q.front();
            if (i.second <= ss) {
                cout << "0 ";
            } else {
                ss = max(ss + 1, i.first);
                cout << ss << " ";
            }
            q.pop();
        }
        cout << endl;
    }
    return 0;
}
