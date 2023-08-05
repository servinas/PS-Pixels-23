/*link to the problem:
 * https://codeforces.com/problemset/problem/567/A
 */

#include<bits/stdc++.h>

using namespace std;
const int OO = 0x3f3f3f3f;

void RUN() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}


int main() {
    RUN();
    int n;
    cin >> n;
    int x;
    vector<int> city(n , 0);
    vector<int> mnCost(n , 0);
    vector<int> mxCost(n , 0);

    for (int i = 0; i < n; ++i) {
        cin >> city[i];
    }
    for (int i = 1; i < n - 1; ++i) {
        mnCost[i] = min(abs(city[i] - city[i - 1]), abs(city[i] - city[i + 1]));
        mxCost[i] = max(abs(city[i] - city[0]), abs(city[i] - city[n - 1]));

    }
    mnCost[0] = abs(city[0] - city[1]);
    mxCost[0] = abs(city[0] - city[n-1]);
    mnCost[n-1] = abs(city[n-1] - city[n-2]);
    mxCost[n-1] = abs(city[0] - city[n-1]);
    for (int i = 0; i < n; ++i) {
      cout<<mnCost[i]<<" "<<mxCost[i]<<"\n";
    }



    return 0;
}
