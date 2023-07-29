/*link to the problem:
 * https://atcoder.jp/contests/abc218/tasks/abc218_a?lang=en
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
    string s;
    cin>>n>>s;
    n--;
    if(s[n]=='o')cout<<"Yes";
    else cout<<"No";
    return 0;
}
