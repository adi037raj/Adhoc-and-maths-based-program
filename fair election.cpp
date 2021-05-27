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
typedef priority_queue <int, vector<int>, greater<int> > min_heap;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
void fast_io(){
   std::ios_base::sync_with_stdio(0);
   std::cin.tie(NULL);
 std::  cout.tie(NULL);
}



int main(){
//fast_io();
int t;

cin>>t;
while(t--)
{
min_heap first;
priority_queue <int > second;
int n,m;
int sum1=0,sum2=0;
cin>>n>>m;
REP(i,n)
{
    int x;
    cin>>x;
    sum1+=x;
    first.push(x);
}
REP(i,m)
{
    int x;
    cin>>x;
    sum2+=x;
    second.push(x);
}
int ans=0;
while(sum1<=sum2)
{
    int f=first.top();
    int s=second.top();
    if(f<s)
    {
        ans++;
        first.pop();
        second.pop();
        first.push(s);
        second.push(f);
        sum1=sum1-f+s;
        sum2=sum2-s+f;
    }
    else break;
}
if(sum1<=sum2)
{
    cout<<-1<<endl;
}
else
{
    cout<<ans<<endl;
}



}



return 0;
}
