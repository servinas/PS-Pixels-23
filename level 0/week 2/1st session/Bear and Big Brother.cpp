/*link to the problem:
 *   https://codeforces.com/problemset/problem/791/A
 */

#include<bits/stdc++.h>

using namespace std;

void RUN() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
int a,b;
int years(int a,int b){
    if(a>b)return 0;
    return years(a*3,b*2)+1;
}
int main() {
    RUN();
    cin>>a>>b;
cout<<years(a,b);
    return 0;
}
