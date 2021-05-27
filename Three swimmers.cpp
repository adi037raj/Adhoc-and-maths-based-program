#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization ("unroll-loops")
#include<bits/stdc++.h>
using namespace std;
#define clr(a) memset(a,0,sizeof(a))
#define REP(i,n) for(int i=0;i<n;i++)
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

ll ceil(ll a,ll b)
{

    return (a / b) + ((a % b) != 0);
}

int main(){
fast_io();
int t;

cin>>t;
while(t--)
{
ll p,a,b,c;
cin>>p>>a>>b>>c;


ll res1,res2,res3;
res1=ceil(p,a),res2=ceil(p,b),res3=ceil(p,c);
//cout<<"res1"<<res1 <<" res2 "<<res2<<" res3 "<<res3;
ll ans=LONG_LONG_MAX;
res1=abs(res1*a*1ll-p);
res2=abs(res2*b*1ll-p);
res3=abs(res3*c*1ll-p);
//cout<<"res1"<<res1 <<" res2 "<<res2<<" res3 "<<res3;
if(ans>res1)
    ans=res1;
if(ans>res2)ans=res2;
if(ans>res3)ans=res3;
cout<<ans<<endl;






}



return 0;
}
