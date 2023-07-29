/*link to the problem:
 *     https://atcoder.jp/contests/abc241/tasks/abc241_a?lang=en
 */

#include<bits/stdc++.h>

using namespace std;

void RUN() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
int arr[10];
int main() {
    RUN();
   int k=1;
    for (int i = 1; i <=9 ; ++i) {
        cin>>arr[i];
    }
    for (int i = 0; i < 2; ++i) {
       k=arr[k];

    }
cout<<k;
    return 0;
}
