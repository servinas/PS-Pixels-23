/*link to problem :
 * https://atcoder.jp/contests/abc233/tasks/abc233_a
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
    int x,y;
  cin>>x>>y;

  if(y<x){
      cout<<0<<"\n";
  }else{
      int diff=y-x;
      int ans=diff/10;
      if(diff%10)ans++;
      cout<<ans;

  }

    return 0;
}
