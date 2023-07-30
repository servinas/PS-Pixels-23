/*link to the problem:
 *   https://codeforces.com/problemset/problem/731/A
 */

#include<bits/stdc++.h>

using namespace std;

void RUN() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

string s;

int mnRotation(int idx=0, int cur = 0) {
    if (idx == s.size())return 0;
    int diff = abs(cur - (s[idx] - 'a'));
    int ans = min(mnRotation(idx+1, s[idx] - 'a') + diff, mnRotation(idx+1, s[idx] - 'a') + 26 - diff);
    return ans;
}

int main() {
    RUN();
    cin >> s;
    cout<<mnRotation(0,0);
    return 0;
}
