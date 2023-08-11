/*link to the problem:
 * https://codeforces.com/problemset/problem/584/A
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
    int n,t;
    cin>>n>>t;
    if(n==1&&t==10)cout<<-1;
    else if(t==10){
        for (int i = 0; i < n - 1; ++i) {
            cout<<1;
        }cout<<0;
    }else{
        for (int i = 0; i < n; ++i) {
            cout<<t;
        }
    }
    return 0;
}
