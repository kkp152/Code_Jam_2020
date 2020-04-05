#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main()
{
    ios
    ll t;
    cin>>t;
    for(ll x=1;x<=t;x++)
    {
        string s;
        cin>>s;
        ll xx=0;
        vector<char> v;
        for(ll i=0;i<s.size();i++)
        {
            if((s[i]-'0')>xx)
            {
                for(ll j=0;j<((s[i]-'0')-xx);j++)
                    v.push_back('(');
                xx+=((s[i]-'0')-xx);
                v.push_back(s[i]);
            }
            else if((s[i]-'0')<xx)
            {
                for(ll j=0;j<(xx-(s[i]-'0'));j++)
                    v.push_back(')');
                xx-=(xx-(s[i]-'0'));
                v.push_back(s[i]);
            }
            else
                v.push_back(s[i]);
        }
        for(ll i=0;i<xx;i++)
            v.push_back(')');
        cout<<"Case #"<<x<<": ";
        for(ll i=0;i<v.size();i++)
            cout<<v[i];
        cout<<"\n";
    }
    return 0;
}

