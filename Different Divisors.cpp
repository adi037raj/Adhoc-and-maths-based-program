#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization ("unroll-loops")
#include<bits/stdc++.h>
using namespace std;
#define clr(a) memset(a,1,sizeof(a))
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
typedef priority_queue <int, vector<int>, greater<int> > min_heap;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
void fast_io(){
   std::ios_base::sync_with_stdio(0);
   std::cin.tie(NULL);
 std::  cout.tie(NULL);
}
#define N 100001
vi prime;
void call_me_baby()
{
    bool is_prime[N];
    clr(is_prime);
    int i,j;
    is_prime[0]=is_prime[1]=false;
    for(i=2;i*i<=N;i++)
    {
        if(is_prime[i]==true)
        {

            for(j=i*i;j<=N;j+=i)
                is_prime[j]=false;
        }

    }

    for(i=2;i<=N;i++)
        if(is_prime[i])
        prime.pb(i);




}




int main(){
//fast_io();
int t;
call_me_baby();
cin>>t;
while(t--)
{
int d;
cin>>d;
int n=prime.size();
int prev=1;
ll ans=1;
int flag=0;
REP(i,n)
{
    if(prime[i]-prev>=d)
    {
        ans*=prime[i]*1LL;
        flag++;
        prev=prime[i];
    }
    if(flag==2)break;
}
    cout<<ans<<endl;



}



return 0;
}
