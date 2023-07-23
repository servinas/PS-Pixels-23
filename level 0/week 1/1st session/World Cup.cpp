/*link to problem :
 * https://atcoder.jp/contests/abc262/tasks/abc262_a
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
    int y;
    cin>>y;
    if(y%4==0){
        cout<<y+2;
    }else if(y%4==2){
        cout<<y;
    }else{
        cout<<y+y%4;
    }
    return 0;
}
