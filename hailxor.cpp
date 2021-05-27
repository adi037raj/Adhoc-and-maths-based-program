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
int greatestpower(int x)
{
    return log2(x);
}


int main(){
//fast_io();
int t;

cin>>t;
while(t--)
{
int n,x;
cin>>n>>x;
int a[n];
REP(i,n)cin>>a[i];
int i=0;
while(1)
{
    if(x==0)break;
    while(i<n-1 && a[i]==0)i++;
    if(i==n-1)break;
    int gpo2=greatestpower(a[i]);
    a[i]^=gpo2;

}


}



return 0;
}
