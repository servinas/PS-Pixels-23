
/*link to problem :
 * https://atcoder.jp/contests/abc210/tasks/abc210_a?lang=en
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

    ll n, a, x, y;
    cin >> n >> a >> x >> y;
    if (n <= a) {
        cout << n * x << endl;
    } else {
        cout << a * x + (n - a) * y << endl;
    }


    return 0;
}
