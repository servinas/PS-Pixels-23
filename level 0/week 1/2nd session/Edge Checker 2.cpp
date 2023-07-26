/*link to the problem:
 * https://atcoder.jp/contests/abc285/tasks/abc285_a?lang=en
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
    int a,b;
    cin>>a>>b;
    if(b==2*a||b==2*a+1)cout<<"Yes\n";
    else cout<<"No\n";

    return 0;
}
