#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization ("unroll-loops")
#include<bits/stdc++.h>
using namespace std;
#define clr(a) memset(a,0,sizeof(a))
#define REP(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define mod 10000000007
typedef long long ll;
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

ll func(ll a,ll b,ll c)
{
    return abs(a-b)+abs(a-c)+abs(b-c);

}

int main(){
//fast_io();
int t;

cin>>t;
while(t--)
{
ll n;
cin>>n;
ll a[n];
REP(i,n)cin>>a[i];
if(n==3)
{
    cout<<func(a[0],a[1],a[2])<<endl;;
    continue;
}

sort(a,a+n);

ll ans1=func(a[0],a[n-1],a[n-2]);
ll ans2=func(a[0],a[1],a[n-1]);
cout<<max(ans1,ans2)<<endl;


}



return 0;
}
