/*link to the problem:
 * https://atcoder.jp/contests/abc173/tasks/abc173_a
 */

#include<bits/stdc++.h>

using namespace std;

void RUN() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main() {
    RUN();
    int n;
    cin>>n;
    int bills=(n/1000)+(n%1000!=0);
    int changes=(bills*1000)-n;
    cout<<changes;
    return 0;
}
