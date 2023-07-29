/*link to the problem:
 *     https://codeforces.com/problemset/problem/281/A
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
    cin>>s;
   if(s[0]>='a')s[0]-=32;
   cout<<s;
    return 0;
}
