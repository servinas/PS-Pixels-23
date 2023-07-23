/*link to problem :
 * https://atcoder.jp/contests/abc261/tasks/abc261_a
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
    int l1,r1,l2,r2;
    cin>>l1>>r1>>l2>>r2;
    if(r1<=l2||r2<=l1)cout<<0<<endl;
    else{
        int mr= min(r1,r2);
        int ml=max(l1,l2);
        cout<<mr-ml;
    }

    return 0;
}
