//Problem Code: 2227C
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>divby2, divby3, divby6, none;
        while(n--){
            int x;
            cin>>x;
            bool div_2 = (x%2 == 0);
            bool div_3 = (x%3 == 0);
            if(div_2 * div_3) divby6.push_back(x);
            else if(div_2) divby2.push_back(x);
            else if(div_3) divby3.push_back(x);
            else none.push_back(x);
        }

        for(auto i : divby2) cout<<i<<" ";
        for(auto i : none) cout<<i<<" ";
        for(auto i : divby3) cout<<i<<" ";
        for(auto i : divby6) cout<<i<<" ";
        cout<<"\n";
    }
}