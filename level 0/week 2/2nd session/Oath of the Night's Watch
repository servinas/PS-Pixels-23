/*link to the problem:
 * https://codeforces.com/problemset/problem/768/A
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

    for (int i = 0; i < n; ++i) {
        cin >> a[i];

    }
    sort(a.begin(), a.end());
    int cnt=0;
    for (int i = 0; i <n; ++i) {
     if(a[0]<a[i]&&a[n-1]>a[i])cnt++;
    }
cout<<cnt;

    return 0;
}
