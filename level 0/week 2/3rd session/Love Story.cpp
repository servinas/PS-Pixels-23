/*link to the problem:
 * https://codeforces.com/problemset/problem/1829/A
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
    string cod = "codeforces";
    for (int i = 0; i < n; i++) {
        cin >> s;
        int ans = 0;
        for (int j = 0; j < s.size(); ++j) {
            if (s[j] != cod[j]) {
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
