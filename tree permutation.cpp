#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization ("unroll-loops")
#include<bits/stdc++.h>
using namespace std;
#define clr(a) memset(a,0,sizeof(a))
#define REP(i,n) for(ll i=0;i<n;i++)
#define pb push_back
#define mod 1000000007
#define MAX 1000001
typedef long long int ll;
typedef std::vector<int> vi;
typedef vector<ll> vll;
typedef std::pair<int,int> pi;
#define F first
#define S second
#define MP make_pair
const double PI = 3.141592653589793238460;
typedef priority_queue <int > max_heap;
typedef priority_queue <int, vector<int>, greater<int> > min_heap;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
void fast_io(){
   std::ios_base::sync_with_stdio(0);
   std::cin.tie(NULL);
 std::  cout.tie(NULL);
}
vll my_lists[MAX],extra_vector;
ll A[MAX],B[MAX],fuck[MAX],par[MAX],a[MAX],b[MAX],h[MAX],vis[MAX],n,s,variable;
priority_queue<pair<ll,ll>>my_queue;


void initilaize_it(ll parent_me,ll d)
{
    vis[parent_me]++;
    h[parent_me]=d;bool flag=true;
    for(auto chd:my_lists[parent_me])
    if(!vis[chd])
    {
        par[chd]=parent_me;
        initilaize_it(chd,d+1);
        flag=false;
    }
    if(flag)
    my_queue.push({d,parent_me});

}

void clear_now_everything()
{

    REP(i,n+1){
    my_lists[i].clear();
    a[i]=b[i]=par[i]=h[i]=0;

    }

  while(!my_queue.empty())
    my_queue.pop();
}

void clear_now(ll parent_me)
{

    fuck[a[parent_me]]=fuck[b[parent_me]]=A[a[parent_me]]=B[a[parent_me]]=A[b[parent_me]]=B[b[parent_me]]=0;
}

 int checkingit(ll parent_me)
 {

     B[b[parent_me]]++;
     A[a[parent_me]]++;
     if(A[a[parent_me]]==B[a[parent_me]] && fuck[a[parent_me]]!=0)
     {
         fuck[a[parent_me]]--;
         variable--;
     }

     else if(fuck[a[parent_me]]==0)
     {
         fuck[a[parent_me]]++;
         variable++;

     }
     if(A[b[parent_me]]==B[b[parent_me]] && fuck[b[parent_me]]!=0)
     {
         fuck[b[parent_me]]--;
         variable--;

     }
     else if(fuck[b[parent_me]]==0)
     {
         fuck[b[parent_me]]++;
         variable++;

     }
     vis[parent_me]++;
     extra_vector.push_back(parent_me);

     if(variable==0)
     {
         if(vis[par[parent_me]]==0 &&parent_me!=1)
            my_queue.push({h[par[parent_me]],par[parent_me]});
            clear_now(parent_me);
            return 1;
     }
         if(parent_me==1){

            clear_now(parent_me);
            return 0;

         }
if(vis[par[parent_me]]==0)
{
    if(checkingit(par[parent_me])==1)
    {
        clear_now(parent_me);
        return 1;
    }
}
clear_now(parent_me);
return 0;


 }




int main(){
fast_io();
int t;
clear_now_everything();
cin>>t;
while(t--)
{
     cin>>n>>s;
    REP(i,n-1)
    {
        ll u,v;
        cin>>u>>v;
        my_lists[u].push_back(v);
        my_lists[v].push_back(u);
    }
    for(ll i=1;i<n+1;i++)
    cin>>a[i];
    for(ll i=1;i<n+1;i++)
    cin>>b[i];
    for(ll i=1;i<n+1;i++)
    {
        vis[i]=par[i]=h[i]=0;
    }
    initilaize_it(1,1);
    for(ll i=1;i<n+1;i++)
        vis[i]=0;
    bool flag=true;
    vector<vector<ll>>my_vactor;
    while(!my_queue.empty())
        {

            pair<ll,ll> leaf=my_queue.top();
            my_queue.pop();
            if(vis[leaf.second]==0)
            {

                variable=0;
                extra_vector.clear();
                if(checkingit(leaf.second)==0)
                {
                    flag=false;
                    break;
                }
                else
                    my_vactor.push_back(extra_vector);
            }
        }
        if(!flag)
        {
            cout<<0<<endl;
            clear_now_everything();
            continue;
        }
        if(s==1)
        {
            cout<<1<<endl;clear_now_everything();continue;
        }
        ll ff=1;
        ll x=my_vactor.size();
        REP(i,x){

        ll u=my_vactor[i][0];
        ll l=my_vactor[i][0];
        ll sze=my_vactor[i].size();
        REP(j,sze)
        {

            if(h[my_vactor[i][j]]>h[l])
                l=my_vactor[i][j];
            if(h[my_vactor[i][j]]<h[u])
                u=my_vactor[i][j];
        }
        ll count_var=0;
        for(auto c:my_lists[l])
        {

            if(c!=par[l])count_var++;
        }
        ff=(ff*(count_var+1))%mod;



        }
        cout<<ff<<endl;



clear_now_everything();



}



return 0;
}
