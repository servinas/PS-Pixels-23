/*link to the problem:
 * https://codeforces.com/problemset/problem/208/A
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
    string s;
    cin >> s;
    string cur = "";
    for (int i = 0; i < s.size(); ++i) {
        if (i < s.size() - 2 && s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B') {
            cout << cur << " ";
            cur = "";
            i+=2;
            continue;
        } else {
            cur += s[i];
        }
    }
    cout << cur << " ";
    return 0;
}
