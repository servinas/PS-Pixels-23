/*link to the problem:
 * https://codeforces.com/problemset/problem/855/A
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
    for (int i = 0; i < n; i++) {
        cin >> s;
        if (mp.find(s) != mp.end()) {
            cout << "YES\n";

        } else {
            mp[s]++;
            cout << "NO\n";
        }
    }
    return 0;
}
