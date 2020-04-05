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
        ll n;
        cin>>n;
        vector<vector<ll> > v(n);
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<n;j++)
            {
                ll xx;
                cin>>xx;
                v[i].push_back(xx);
            }
        }
        ll sum=0,rct=0,cct=0;
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<n;j++)
            {
                if(i==j)
                    sum+=v[i][j];
            }
        }
        for(ll i=0;i<n;i++)
        {
            map<ll,ll> rm;
            for(ll j=0;j<n;j++)
            {
                rm[v[i][j]]++;
                if(rm[v[i][j]]>1)
                {
                    rct++;
                    break;
                }
            }
        }
        for(ll i=0;i<n;i++)
        {
            map<ll,ll> cm;
            for(ll j=0;j<n;j++)
            {
                cm[v[j][i]]++;
                if(cm[v[j][i]]>1)
                {
                    cct++;
                    break;
                }
            }
        }
        cout<<"Case #"<<t<<": "<<sum<<" "<<rct<<" "<<cct<<"\n";
    }
    return 0;
}

