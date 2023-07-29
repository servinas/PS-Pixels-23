/*link to the problem:
 *     https://codeforces.com/problemset/problem/59/A
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
   int up=0,low=0;
    for (int i = 0; i < s.size(); ++i) {
        if(s[i]>='a')low++;
        else up++;
    }
    if(up>low){
        for (int i = 0; i < s.size(); ++i) {
            if(s[i]>='a')s[i]-=32;
        }
    } else{
        for (int i = 0; i < s.size(); ++i) {
            if(s[i]<'a')s[i]+=32;
        }
    }
    cout<<s;
    return 0;
}
