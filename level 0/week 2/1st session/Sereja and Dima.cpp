/*link to the problem:
 *   https://codeforces.com/problemset/problem/381/A
 */

#include<bits/stdc++.h>

using namespace std;

void RUN() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int n;
int arr[1005];
int left, right, dima = 0, sereja = 0;
void points(int left=0,int right=n-1,int turn=0){
    if(left>right)return;
    if(turn==0){
        //seraja's turn
       if(arr[left]>arr[right]){
           sereja+=arr[left];
           points(left+1,right,!turn);
       }else{
           sereja+=arr[right];
           points(left,right-1,!turn);
       }
    }else{
        if(arr[left]>arr[right]){
            dima+=arr[left];
            points(left+1,right,!turn);
        }else{
            dima+=arr[right];
            points(left,right-1,!turn);
        }
    }
}
int main() {
    RUN();
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    points(0,n-1,0);
    cout<<sereja<<" "<<dima;
    return 0;
}
