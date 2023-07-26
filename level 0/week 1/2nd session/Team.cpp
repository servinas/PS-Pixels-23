/*link to the problem:
 * https://codeforces.com/problemset/problem/231/A
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
    int n;
    cin>>n;
    int arr[3];
    int ans=0;
    for (int i = 0; i < n; ++i) {
        int sure=0;
        for (int j = 0; j < 3; ++j) {
            cin>>arr[j];
            sure+=arr[j];
        }
        if(sure>=2)ans++;
    }
    cout<<ans;
    return 0;
}
