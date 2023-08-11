/*link to the problem:
 * https://vjudge.net/problem/SPOJ-MINSTOCK/origin
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
    string x;
    int y;
    int type;
    map<string, int> mp;
    map<int, string> mp2;
    multiset<int> ms;
    for (int i = 0; i < n; ++i) {
        cin >> type;
        if (type == 1) {
            //price of x =y
            cin >> x >> y;
            mp[x] = y;
            mp2[y] = x;
            ms.insert(y);
      
        } else if (type == 2) {
            //price of x changed to y
            cin >> x >> y;

            int prev = mp[x];
            ms.erase(prev);
            mp[x] = y;
            mp2.erase(prev);
            mp2[y] = x;
 
            ms.insert(y);
        } else {
            cin >> x;
           
            auto it = ms.begin();
            cout << mp2[*it] << " " << i + 1 << endl;

            ms.erase(it);

        }
    }
    return 0;
}
