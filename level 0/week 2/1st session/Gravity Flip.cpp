/*link to the problem:
 *  https://codeforces.com/problemset/problem/405/A
 */

#include<bits/stdc++.h>

using namespace std;
const int OO = 0x3f3f3f3f;

void RUN() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int arr[105];
int n;

int main() {
    RUN();
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    sort(arr,arr+n);
    for (int i = 0; i < n; ++i) {
       cout<<arr[i]<<" ";
    }

    return 0;
}
