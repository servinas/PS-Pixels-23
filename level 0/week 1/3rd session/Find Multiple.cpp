/*link to the problem:
 * https://atcoder.jp/contests/abc220/tasks/abc220_a?lang=en
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
    int a,b,c;
    cin>>a>>b>>c;
    int x=(b/c);
    x*=c;
    if(x>=a)cout<<x;
    else cout<<-1;
    return 0;
}
