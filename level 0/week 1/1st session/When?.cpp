/*link to problem :
 * https://atcoder.jp/contests/abc258/tasks/abc258_a
 */
#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define endl "\n"

void RUN() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main() {
    RUN();
    int k;
    cin >> k;
    int hours = 21;
    if (k >= 60) {
        hours += (k / 60);
    }
    cout<<hours<<":";
    int minutes = 0;
    minutes += (k % 60);
    if(minutes<10){
        cout<<"0"<<minutes;
    }else{
        cout<<minutes;
    }

    return 0;
}
