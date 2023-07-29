/*link to the problem:
 *     https://codeforces.com/problemset/problem/339/A
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
    string nw="";
    for (int i = 0; i < s.size(); ++i) {
        if(s[i]!='+')nw+=s[i];
    }
    sort(nw.begin(),nw.end());
    for (int i = 0; i < nw.size(); ++i) {
        cout<<nw[i];
        if(i!=nw.size()-1){
            cout<<'+';
        }
    }
    return 0;
}
