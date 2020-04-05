#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main()
{
    ios
    ll t;
    cin>>t;
    for(ll u=1;u<=t;u++)
    {
        ll n,fg=0,cc=0,jj=0;
        cin>>n;
        string sx;
        vector<pair<ll,pair<ll,ll> > > v;
        for(ll i=0;i<n;i++)
        {
            sx+='C';
            ll x,y;
            cin>>x>>y;
            v.push_back({x,{y,i}});
        }
        sort(v.begin(),v.end());
        for(ll i=0;i<n;i++)
        {
            if(v[i].first>=cc)
            {
                sx[v[i].second.second]='C';
                cc=v[i].second.first;
            }
            else if(v[i].first>=jj)
            {
                sx[v[i].second.second]='J';
                jj=v[i].second.first;
            }
            else
            {
                cout<<"Case #"<<u<<": ";
                cout<<"IMPOSSIBLE\n";
                goto xx;
            }
        }
        cout<<"Case #"<<u<<": ";
        cout<<sx;
        cout<<"\n";
        xx:;
    }
    return 0;
}

