/*link to the problem:
 *     https://codeforces.com/problemset/problem/266/A
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
    string s;
    cin>>s;
   int cnt=0;
    for (int i = 1; i < s.size(); ++i) {
      if(s[i]==s[i-1])cnt++;
    }
    cout<<cnt;
    return 0;
}
