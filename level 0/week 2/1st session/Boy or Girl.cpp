/*link to the problem:
 *   https://codeforces.com/problemset/problem/236/A
 */

#include<bits/stdc++.h>

using namespace std;

void RUN() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

string s;

int distinctCounter(int idx = 0) {
    if (idx == s.size())return 0;
    if (idx == 0)
        return distinctCounter(idx + 1) + 1;
    if (s[idx] != s[idx - 1]) {
        return distinctCounter(idx + 1) + 1;
    } else
        return distinctCounter(idx + 1);
}

int main() {
    RUN();
    cin >> s;
    sort(s.begin(), s.end());
    if (distinctCounter(0) & 1)return cout << "IGNORE HIM!", 0;
    cout << "CHAT WITH HER!";
    return 0;
}
