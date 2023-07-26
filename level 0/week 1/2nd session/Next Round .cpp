/*link to the problem:
 * https://codeforces.com/problemset/problem/158/A
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
    int n, k;
    cin >> n >> k;
    k--;
    int arr[53];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    int score = arr[k];
    int numOfParticipants = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] >= score && arr[i] > 0) {
            numOfParticipants++;
        }
    }
cout<< numOfParticipants;

    return 0;
}
