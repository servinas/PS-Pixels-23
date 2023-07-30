/*link to the problem:
 *    https://codeforces.com/problemset/problem/431/A
 */

#include<bits/stdc++.h>

using namespace std;

void RUN() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

string s;
int a[5];
int numOfCalories(int idx=0){
    if(idx==s.size())return 0;
    return numOfCalories(idx+1)+a[s[idx]-'0'];
}
int main() {
    RUN();

    for (int i = 1; i <=4 ; ++i) {
        cin>>a[i];
    }
    cin>>s;
    cout<<numOfCalories(0);

    return 0;
}
