/*link to the problem:
 * https://codeforces.com/problemset/problem/766/A
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
    string a,b;
    cin>>a>>b;
    if(a==b)cout<<-1;
    else cout<<max(a.size(),b.size());

    return 0;
}
