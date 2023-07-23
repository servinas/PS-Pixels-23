/*link to problem :
 * https://atcoder.jp/contests/abc237/tasks/abc237_a
 */
#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define endl "\n"

void RUN() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main() {
    RUN();
    ll n;
    ll intlimet=(ll)1<<31;
   cin>>n;
   if((-intlimet<=n)&&(n<intlimet))cout<<"Yes\n";
   else cout<<"No\n";
    return 0;
}
