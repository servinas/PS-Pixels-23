/*link to the problem:
 *     https://codeforces.com/problemset/problem/785/A
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
    int n;
    cin >> n;
    string s;
    int total=0;
    for (int i = 0; i < n; ++i) {
        cin>>s;
        if(s=="Tetrahedron")total+=4;
        else if(s=="Cube")total+=6;
        else if(s=="Octahedron")total+=8;
        else if(s=="Dodecahedron")total+=12;
        else if(s=="Icosahedron")total+=20;
    }
cout<<total;
    return 0;
}
