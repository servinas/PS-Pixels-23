/*link to the problem:
 * https://codeforces.com/problemset/problem/160/A
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
    vector<int>a(n);
    int sum=0;
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
        sum+=a[i];
    }
    sort(a.begin(),a.end());
    reverse(a.begin(),a.end());
    int me=0;
    int cnt=0;
    for (int i = 0; i < n; ++i) {
        me+=a[i];
        cnt++;
        if(me>sum-me){
            break;
        }
    }
    cout<<cnt;
    return 0;
}
