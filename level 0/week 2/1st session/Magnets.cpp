/*link to the problem:
 *  https://codeforces.com/problemset/problem/344/A
 */

#include<bits/stdc++.h>

using namespace std;

void RUN() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int n;
string arr[100005];
int groups(int idx=1){
    if(idx==n)return 1;
    if(arr[idx]!=arr[idx-1]){
        return groups(idx+1)+1;
    }else{
        return groups(idx+1);
    }
}

int main() {
    RUN();
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
cout<<groups(1);
    return 0;
}
