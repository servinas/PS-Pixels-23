/*link to the problem:
 * https://codeforces.com/problemset/problem/474/A
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
    char c;
    cin>>c;
    string key="qwertyuiopasdfghjkl;zxcvbnm,./";
    string s;
    cin>>s;
    int dir;
    if(c=='R')dir=-1;
    else dir=1;
    for (int i = 0; i < s.size(); ++i) {
        for (int j = 0; j < key.size(); ++j) {
            if(s[i]==key[j]){
                cout<<key[j+dir];
                break;
            }
        }
    }
    return 0;
}
