/*link to the problem:
 * https://codeforces.com/problemset/problem/903/C
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
    vector<int> a(n);
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mp[a[i]]++;
    }
    int ans = 0;
    for (auto i: mp) {
        ans = max(ans, i.second);
    }
    cout << ans;
    return 0;
}
