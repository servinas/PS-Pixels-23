/*link to the problem:
 * https://codeforces.com/problemset/problem/398/A
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
    vector<int> has(n + 2, 0);
    int nw = n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        has[a[i]] = 1;
        while (has[nw]) {
            cout << nw << " ";
            nw--;
        }
        cout << endl;
    }


    return 0;
}
