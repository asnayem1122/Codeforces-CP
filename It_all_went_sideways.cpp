//Problem Code: 2227E
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(auto& x: a) cin >> x;
        
        // suffix_min[i] = min(a[i..n-1])
        vector<int> smin(n+1, INT_MAX);
        for(int i = n-1; i >= 0; i--)
            smin[i] = min(a[i], smin[i+1]);
        
        long long total = 0, fixed = 0;
        for(int i = 0; i < n; i++){
            total += a[i];
            fixed += smin[i];
        }
        long long base = total - fixed;
        
    
        vector<int> cnt(n);
        stack<int> stk;
        for(int k = 0; k < n; k++){
            while(!stk.empty() && a[stk.top()] >= a[k]) stk.pop();
            int prev = stk.empty() ? -1 : stk.top();
            cnt[k] = k - prev;
            stk.push(k);
        }
        
        
        long long best_gain = 0;
        for(int k = 0; k < n; k++){
            long long gain = (smin[k+1] >= a[k]) ? (long long)cnt[k] - 1 : -1;
            best_gain = max(best_gain, gain);
        }
        
        cout << base + best_gain << "\n";
    }
    return 0;
}