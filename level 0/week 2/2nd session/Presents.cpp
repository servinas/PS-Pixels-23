/*link to the problem:
 * https://codeforces.com/problemset/problem/136/A
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
    int x;
    vector<int> friends(n + 4, 0);
    for (int i = 0; i < n; ++i) {
        cin >> x;
friends[x]=i+1;
    }
    for (int i = 1; i <= n; ++i) {
        cout << friends[i] << " ";
    }

    return 0;
}
