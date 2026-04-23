#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin>>t;
    vector<pair<long long ,long long>>term;
    string result;
    while(t--){
        long long a;
        long long b;
        cin>>a;
        cin>>b;
        term.push_back(make_pair(a, b));
    }
    
    for(long long i = 0; i<term.size(); i++){
        if(abs(term[i].first - term[i].second) > 0){ cout<<"rated"; return 0;}
    }

    for(long long i = 0; i < term.size()-1; i++){
        if(term[i].first < term[i+1].first){
            cout<<"unrated"; return 0;
        }
    }
    cout<<"maybe"<<endl; return 0;
}