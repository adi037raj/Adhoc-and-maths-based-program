#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization ("unroll-loops")
#include<bits/stdc++.h>
using namespace std;
#define clr(a) memset(a,0,sizeof(a))
#define REP(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define mod 1e15
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
ll aditya(ll n,ll e,ll h,ll a,ll b,ll c);

ll max(ll a,ll b)
{
    return a>b?a:b;

}

int main() {
    long long t;

    cin >> t;

    while (t--) {
      ll n,e,h,a,b,c;
      cin>>n>>e>>h>>a>>b>>c;
      ll ans=aditya(n,e,h,a,b,c);
      if(ans==mod)
        cout<<-1<<endl;
      else
        cout<<ans<<endl;

    }

    return 0;
}

ll aditya(ll n,ll e,ll h,ll a,ll b,ll c)
{
    ll res=mod;

    if(3*n<=h)
         res=min(res,n*b);
    if(n<=e && n<=h)
    {
        res=min(res,n*c);
    }
     if(2*n<=e)
        res=min(res,n*a);
    if(((h-n)/2 >=1) && ((h-n)/2 >= n-e))
    {
        if(b<c)
        {
            ll temp=min(n-1,(h-n)/2);
            res=min(res,temp*(b-c)+n*c);

        }
        else
        {
           ll temp=max(1,n-e);
            res=min(res,temp*(b-c)+n*c);
        }

    }
    if((e/2 >= 1) && (e/2 >=(3*n-h+2)/3))
    {
        if(a<b)
        {
            ll temp=min(n-1,e/2);
            res=min(res,temp*(a-b)+n*b);
        }
        else
        {
            ll temp=max(1,(3*n-h+2)/3);
            res=min(res,temp*(a-b)+n*b);
        }
    }

    if((e-n)>=1 && (e+h)>= 2*n)
    {
        if(a<c)
        {
             ll temp=min(n-1,e-n);
            res=min(res,temp*(a-c)+n*c);

        }
        else
        {
            ll temp=max(1,n-h);
            res=min(res,temp*(a-c)+n*c);
        }

    }


    if(n>=3 && e>=3 && h>=4)
        res=min(res,a+b+c+aditya(n-3,e-3,h-4,a,b,c));
    return res;

}


