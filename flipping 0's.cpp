
#pragma GCC optimize("Ofast")

#pragma GCC target("avx,avx2,fma")

#pragma GCC optimization ("unroll-loops")

#include<bits/stdc++.h>
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
typedef std::complex<double> Complex;
using namespace std;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
void fast_io(){
   std::ios_base::sync_with_stdio(0);
   std::cin.tie(NULL);
 std::  cout.tie(NULL);
}

int max_sum(int *a,int n)
{
    int res=0,max_so_far=res;
    REP(i,n)
    {
        max_so_far=max(max_so_far+a[i],a[i]);
        res=res<max_so_far?max_so_far:res;

        }
        return res;
}

int main(){
fast_io();
int t;

cin>>t;
while(t--)
{
int n;
cin>>n;
int a[n];
REP(i,n)
cin>>a[i];
int zero=0;
REP(i,n)
{
    if(a[i]==0)
    {
        zero++;
        a[i]=-1;
    }
}
int ans=max_sum(a,n);
cout<<ans+zero<<endl;

}



return 0;
}
