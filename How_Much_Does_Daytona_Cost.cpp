//Problem Code: 1878A
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin >> n >> k;
        vector<int> a(n);

        for(auto &i: a){
            cin >> i;
        }

        bool flag = false;
        for(auto i : a){
            if(i == k){
                flag = true;
            }
        }

        cout<<(flag ? "YES" : "NO")<<endl;
    }

    return 0;
}