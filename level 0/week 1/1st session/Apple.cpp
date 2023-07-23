/*link to problem :
 * https://atcoder.jp/contests/abc265/tasks/abc265_a
 */
#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define endl "\n"

void RUN() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main() {
    RUN();
    int x, y, n;
    cin >> x >> y >> n;
    if (x * 3 < y) {
        //we will buy one apple each time
        cout << n * x;
    } else {
        cout << y * (n / 3) + (n % 3) * x;
    }
    return 0;
}
