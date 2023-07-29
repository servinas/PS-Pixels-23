/*link to the problem:
 *    https://codeforces.com/problemset/problem/71/A
 */

#include<bits/stdc++.h>

using namespace std;

void RUN() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main() {
    RUN();
    int n;
    string s;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> s;
        if (s.size() > 10) {
            cout << s[0] << s.size() - 2 << s[s.size() - 1];
        } else {
            cout << s;
        }
        cout << endl;
    }
    return 0;
}
