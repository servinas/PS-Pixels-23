/*link to the problem:
 * https://atcoder.jp/contests/abc259/tasks/abc259_a?lang=en
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
    int n,m,x,t,d;
    cin>>n>>m>>x>>t>>d;
    if(m>=x)cout<<t;
    else cout<<t-(x-m)*d;
    return 0;
}
