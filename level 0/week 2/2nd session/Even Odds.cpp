/*link to the problem:
 * https://codeforces.com/problemset/problem/318/A
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
    long long n,k;
    cin>>n>>k;
    long long even=n/2;
  long long   odd=n/2;
    if(n%2==1){
        odd++;
    }
    if(k>odd){
        k-=odd;
        cout<<k*2;
    }else{
        cout<<(k*2)-1;
    }
    return 0;
}
