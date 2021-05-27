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


int main(){
fast_io();
int t;

cin>>t;
while(t--)
{

int n,m;

cin>>n>>m;
vector<ll> myarrat(n+1);
ll res=0;
REP(i,n+1)
{
    if(i==0)continue;
    ll a=m%i;
    res+=myarrat[a];
    for(ll b=a;b<n+1;b+=i)
        myarrat[b]++;

}
cout<<res<<endl;


}



return 0;
}
