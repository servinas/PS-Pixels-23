/*link to the problem:
 * https://atcoder.jp/contests/abc245/tasks/abc245_a?lang=en
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
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    a*=(60*60);
    c*=(60*60);
    b*=60;
    d*=60;
    d++;
    a+=b;
    c+=d;
    if(a<c)cout<<"Takahashi";
    else cout<<"Aoki";

    return 0;
}
