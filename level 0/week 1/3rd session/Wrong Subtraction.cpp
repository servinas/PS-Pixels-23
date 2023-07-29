/*link to the problem:
 *    https://codeforces.com/problemset/problem/977/A
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
    int n,k;
    cin>>n>>k;
    int last;
    for (int i = 0; i < k; ++i) {
        last=n%10;
        if(last==0)n/=10;
        else n--;
    }
    cout<<n;
    return 0;
}
