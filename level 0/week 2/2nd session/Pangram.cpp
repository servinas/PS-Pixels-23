/*link to the problem:
 * https://codeforces.com/problemset/problem/520/A
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
    int n;
    cin >> n;
    string s;
    cin>>s;
    vector<int>freq(26);
    for (int i = 0; i < s.size(); ++i) {
        if(s[i]<'a')s[i]+=32;
        freq[s[i]-'a']++;
    }
    for (int i = 0; i <26; ++i) {
       if(freq[i]==0){
           cout<<"NO";
           return 0;
       }
    }
cout<<"YES";
    return 0;
}
