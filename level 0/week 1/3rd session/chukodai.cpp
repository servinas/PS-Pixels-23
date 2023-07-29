/*link to the problem:
 * https://atcoder.jp/contests/abc236/tasks/abc236_a?lang=en
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
    string s;
    cin>>s;
    int a,b;
    cin>>a>>b;
    a--;
    b--;
    swap(s[a],s[b]);
    cout<<s<<endl;

    return 0;
}
