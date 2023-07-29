/*link to the problem:
 *    https://codeforces.com/problemset/problem/734/A
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
    int n,k;
    string s;
    int danik=0,anton=0;
    cin>>n>>s;
    for (int i = 0; i < n; ++i) {
        if(s[i]=='D')danik++;
        else anton++;
    }
    if(danik>anton)cout<<"Danik";
    else if(anton>danik)cout<<"Anton";
    else cout<<"Friendship";
    return 0;
}
