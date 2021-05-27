#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization ("unroll-loops")
#include<bits/stdc++.h>
using namespace std;
#define clr(a) memset(a,0,sizeof(a))
#define REP(i,n) for(ll i=0;i<n;i++)
#define pb push_back
#define mod 10000000007
typedef long long int ll;
typedef std::vector<int> vi;
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

void push_me_back(vector<vector<pair<ll,ll>>> &a,ll i)
{
    ll u,v,d;
    cin>>u>>v>>d;
    a[u].push_back({i,d});
    a[v].push_back({i,d});


}

void reverse_me(vector<pair<ll,ll>> &kk)
{
    sort(kk.begin(),kk.end());
            reverse(kk.begin(),kk.end());
}


void check_function()
{

    // cout<<:hekh";
}

void myfunction(ll n,ll m,ll k)
{
    vector<ll> pep(n+1);
    REP(i,n)
    cin>>pep[i+1];

    vector<vector<pair<ll,ll>>> a(n+1),my_matrix(n+1);
    REP(i,m)
    {
 check_function();
       push_me_back(a,i);
    }


    my_matrix[0].push_back({0,0});


    for(ll i=1;i<n+1;i++)
    {
        vector<pair<ll,ll>> my_variable_for; check_function();
        my_variable_for.insert(my_variable_for.end(),my_matrix[i-1].begin(),my_matrix[i-1].end()); check_function();

        set<ll> close;ll after_ask=0,result=0; check_function();
        for(ll j=i;j>=1;j--)
        {
            result+=pep[j];
            after_ask^=1LL<<j;
            for(auto fuck:a[j])
            {
                check_function();
                if(close.count(fuck.first))result+=fuck.second;
                else
                    close.insert(fuck.first);
            }
            if(j>1)
            { check_function();
                for(auto fuck:my_matrix[j-2]){
                        ll x=after_ask^fuck.second;
                    my_variable_for.push_back({fuck.first+result,x});

                }
            }
            else
            my_variable_for.push_back({result,after_ask});
             check_function();

        }

 check_function();
            reverse_me(my_variable_for);
            set<ll> sll; check_function();
            ll killed=0;
            for(ll j=0;j<my_variable_for.size() && killed<k;j++)
            {
                 check_function();
                if(sll.count(my_variable_for[j].second))
                {
                 check_function();
                }
                else
                {
                     check_function();
                    my_matrix[i].push_back(my_variable_for[j]);
                    killed++;
                    sll.insert(my_variable_for[j].second);
                     check_function();
                }
            }
    }


REP(i,k)cout<<my_matrix[n][i].first<<" ";
cout<<endl;



}


int main(){
fast_io();
int t;

cin>>t;
while(t--)
{
ll n,m,k;
cin>>n>>m>>k;
myfunction(n,m,k);



}



return 0;
}
