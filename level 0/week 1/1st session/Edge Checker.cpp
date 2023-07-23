/*link to problem :
 * https://atcoder.jp/contests/abc240/tasks/abc240_a
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
    int a, b;
    cin >> a >> b;
    if (b - a == 1 || b - a == 9) {
        // we can also say if a==1&&b==10 instead of b-a==9
        cout << "Yes"<<endl;
    } else cout << "No"<<endl;

    return 0;
}
