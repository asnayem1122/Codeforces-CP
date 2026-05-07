//Problem Code: 1857A
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

   long long t;
    cin>>t;
    while (t--)
    {
         long long n;
        cin>>n;

      vector<long long> v(n);
        for(long long i=0; i<n;i++)
        {
            cin>>v[i];
        }
        long long count =0;
        for(long long i=0 ; i<n; i++)
        {
            if (v[i]%2==1)
            {
               count++;
            }

        }
        if (count%2==1)
            cout<<"NO"<<endl;
    
        else 
            cout<<"YES"<<endl;
        
    }
    
    return 0;
}