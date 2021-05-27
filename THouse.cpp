#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization ("unroll-loops")
#include<bits/stdc++.h>
using namespace std;
#define clr(a) memset(a,0,sizeof(a))
#define REP(i,n) for(ll i=0;i<n;i++)
#define pb push_back
#define mod 1000000007
typedef long long int ll;
#define int long long
typedef std::vector<ll> vi;
typedef std::pair<ll,ll> pi;
#define F first
#define S second
#define MP make_pair
const double PI = 3.141592653589793238460;
typedef priority_queue <int > max_heap;
typedef priority_queue <int, vector<int>, greater<int> > min_heap;

void fast_io(){
   std::ios_base::sync_with_stdio(0);
   std::cin.tie(NULL);
 std::  cout.tie(NULL);
}
struct point{
int ldmfkjdsktertretgsrdgue;
int index;
};
bool mysort(point p,point q)
{
    return p.ldmfkjdsktertretgsrdgue<q.ldmfkjdsktertretgsrdgue;
}
ll myfunction(vector<ll> graph,bool *visited,ll *child,int n,int *ldmfkjdsktertretgsrdgue_assigned)
{
    ll result=0;
    for(ll i=1;i<=n;i++)
    {


    }
return 0;


}
vector<vi> My_graphs;
vi jkchjhjh,ldmfkjdsktertretgsrdg;


bool my_sort_function(pi &a,pi &b)
{
    return a.second>b.second;
}

vector<pi>ch;
void ikikik(int now,int last)
{
    for(auto x:My_graphs[now])
    {
        if(x==last)continue;
        ikikik(x,now);

    }
    ch.clear();
    for(auto x:My_graphs[now])
    {
        if(x!=last)
        ch.push_back({jkchjhjh[x],x});
    }
    sort(ch.rbegin(),ch.rend());
    int tot=1;
    for(auto [temp,id]:ch) ldmfkjdsktertretgsrdg[id]+=tot++;
    for(auto x:My_graphs[now])
    {

        if(x!=last)
            jkchjhjh[now]+=ldmfkjdsktertretgsrdg[x]*jkchjhjh[x];
    }

}

signed main(){
fast_io();
ll t;
ll myfunction2(ll,ll);
cin>>t;
while(t--)
{
ll n,x;

cin>>n>>x;
jkchjhjh.assign(n,1);
ldmfkjdsktertretgsrdg.assign(n,0);
My_graphs.clear();
My_graphs.resize(n);
REP(i,n-1)
{
    int u,v;
    cin>>u>>v;
    v--,u--;
    My_graphs[u].pb(v);
    My_graphs[v].pb(u);

}
ikikik(0,-1);
cout<<jkchjhjh[0]%mod*x%mod<<endl;



}



return 0;
}





ll myfunction2(ll n,ll x)
{
map<ll,vector<ll>> my_map;
REP(i,n-1)
{

    ll u,v;
    cin>>u>>v;
    auto m_pointer=my_map.find(u);
    if(m_pointer->first==u)
        m_pointer->second.push_back(v);
    else
    {

        vector<ll> l;
        l.push_back(v);
        my_map.insert({u,l});
    }
}


for(auto i=my_map.begin();i!=my_map.end();i++)
{
    vector<pi> neww_d_news;
    auto v=i->second;
    for(auto y=v.begin();y!=v.end();x++)
    {
        ll c=0;
        auto it=my_map.find(*y);
        if(it->first== *y)
         c=it->second.size();
        else
            c=0;
        neww_d_news.push_back({*y,c});

    }
    sort(neww_d_news.begin(),neww_d_news.end(),my_sort_function);
    vi l;
    for(auto it=neww_d_news.begin();it!=neww_d_news.end();it++)
        l.push_back(it->first);
    i->second=l;


}
         map<ll,ll> new_mapps;
for(ll i=1;i<n+1;i++)
{
    auto ir=my_map.find(i);
    if(ir->first==i)
    {
        int num=0;
        if(i==1)
            num=x;
        else
            num=new_mapps.find(i)->second;
        ll j=1;
        for(auto m_pointer=ir->second.begin();m_pointer!=ir->second.end();m_pointer++)
        {
            new_mapps.insert({*m_pointer,num*j});
            j++;
        }

    }
}

ll results=x;
for(auto m_pointer=new_mapps.begin();m_pointer!=new_mapps.end();m_pointer++)
{
    results+=m_pointer->second;
    results=results%mod;
}
cout<<results%mod<<endl;
return 0;

}





