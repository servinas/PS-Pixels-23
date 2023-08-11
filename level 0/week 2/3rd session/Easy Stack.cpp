/*link to the problem:
 * https://www.spoj.com/problems/STACKEZ/en/
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
    int t;
    long long  n,type;
    cin>>t;
    stack<long long>st;
    while (t--){
        cin>>type;

        if(type==1){
            cin>>n;
            st.push(n);
        }else if(type==2){
            if(!st.empty()){
                st.pop();
            }
        }else{
           if(!st.empty()) cout << st.top() << "\n";
           else cout<<"Empty!"<<"\n";
        }
    }
    return 0;
}
