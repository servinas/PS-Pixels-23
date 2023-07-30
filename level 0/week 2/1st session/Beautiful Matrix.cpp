/*link to the problem:
 *  https://codeforces.com/problemset/problem/263/A
 */

#include<bits/stdc++.h>

using namespace std;
const int OO = 0x3f3f3f3f;

void RUN() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int arr[5][5];


int main() {
    RUN();
    int col, row;
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            cin >> arr[i][j];
            if (arr[i][j] == 1) {
                col = j;
                row = i;
            }
        }
    }
    cout << abs(col-2)+ abs(row-2);
    return 0;
}
