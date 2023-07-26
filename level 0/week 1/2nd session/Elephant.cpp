/*link to the problem:
 * https://codeforces.com/problemset/problem/617/A
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
    int x;
    cin>>x;
    int steps=0;
    for(int i=5;i>=1;i--){
        steps+=(x/i);
        x%=i;
    }
    cout<<steps;
    return 0;
}
