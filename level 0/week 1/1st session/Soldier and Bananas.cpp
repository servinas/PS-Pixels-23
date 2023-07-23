/*link to problem :
 * https://codeforces.com/problemset/problem/546/A
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
    ll n,w,k;
    cin>>k>>n>>w;
    ll dollars= (w*(w+1)/2)*k;
    if(dollars>n)cout<<dollars-n;
    else cout<<0;
    return 0;
}
