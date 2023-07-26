/*link to the problem:
 * https://codeforces.com/problemset/problem/1760/A
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
    int t;
    cin >> t;
    while (t--) {
        int arr[3];
        for (int i = 0; i < 3; ++i) {
            cin >> arr[i];
        }
        /*  //first solution
          int mx = 0, mn = 33;
          for (int i = 0; i < 3; ++i) {
              mx = max(mx, arr[i]);
              mn = min(mn, arr[i]);
          }
          for (int i = 0; i < 3; ++i) {
              if (arr[i] != mx && arr[i] != mn) {
                  cout << arr[i] << endl;
                  break;
              }
          }*/

        //second solution
        sort(arr, arr + 3);
        cout << arr[1] << endl;
   
    }
    return 0;
}
