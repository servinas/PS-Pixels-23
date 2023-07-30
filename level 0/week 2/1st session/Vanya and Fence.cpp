/*link to the problem:
 *    https://codeforces.com/problemset/problem/677/A
 */

#include<bits/stdc++.h>

using namespace std;

void RUN() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int n, h;
int arr[1005];

int widthOfRoad(int idx) {
    if(idx==n)return 0;
    if(arr[idx]>h)return widthOfRoad(idx+1)+2;
    else return widthOfRoad(idx+1)+1;
}

int main() {
    RUN();
    cin >> n >> h;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
cout<<widthOfRoad(0);
    return 0;
}
