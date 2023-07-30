/*link to the problem:
 *   https://codeforces.com/problemset/problem/112/A
 */

#include<bits/stdc++.h>

using namespace std;

void RUN() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

string s1,s2;

int comp(int idx1,int idx2){
    if(idx1==s1.size())return 0;
    if(s1[idx1]<s2[idx2]){
        return -1;
    }else if(s1[idx1]>s2[idx2]){
        return 1;
    }
    return comp(idx1+1,idx2+1);
}

int main() {
    RUN();
    cin >> s1>>s2;
    // to make them all have the same case(lower case)
    for (int i = 0; i < s1.size(); ++i) {
        if(s1[i]<'a')s1[i]+=32;
    }
    for (int i = 0; i < s2.size(); ++i) {
        if(s2[i]<'a')s2[i]+=32;
    }
    cout<<comp(0,0);

    return 0;
}
