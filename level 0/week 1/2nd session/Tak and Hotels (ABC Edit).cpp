/*link to the problem:
 * https://atcoder.jp/contests/abc044/tasks/abc044_a?lang=en
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
    int n,k,y,x;
    cin>>n>>k>>x>>y;
    if(n<=k){
        cout<<n*x;
    }else{
        cout<<k*x+(n-k)*y;
    }
    return 0;
}
