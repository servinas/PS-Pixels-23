/*link to problem :
 * https://codeforces.com/problemset/problem/705/A
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
    int n;
    cin>>n;
    for (int i = 0; i < n; ++i) {
        if(i&1){
           cout<<"I love ";
        }else{
            cout<<"I hate ";
        }
        if(i!=n-1){
            cout<<"that ";
        }
    }cout<<"it";
    return 0;
}
