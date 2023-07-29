/*link to the problem:
 *    https://codeforces.com/problemset/problem/798/A
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
    int cnt=0;
    int n=s.size();
    for (int i = 0; i < n/2; ++i) {
        if(s[i]!=s[n-1-i])cnt++;
    }
    if(cnt>1||(n%2==0&&cnt==0))cout<<"NO";
    else cout<<"YES";
    return 0;
}
