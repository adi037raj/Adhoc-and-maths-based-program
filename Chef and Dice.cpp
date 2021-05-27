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

ll myfunction(ll n)
{
    if(n==1)
            return 20;
        if(n==2)
           return 36;
        if(n==3)
            return 51;
       if(n==4)
            return 60;

        ll ans = 0;
            ll r = n%4;
            ans = n*11;
            if(r == 1)
                ans += 21;
            else if(r == 2)
                ans += 22;
            else if(r==3)
                ans += 22;
            else
                ans += 16;
            return ans;



}

int main(){
fast_io();
int t;

cin>>t;
while(t--)
{

ll n;
cin>>n;


cout<<myfunction(n)<<endl;

}



return 0;
}
