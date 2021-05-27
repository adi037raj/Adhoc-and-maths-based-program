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
void myfunction(){
    ll x=-2e18;
    ll  r=2e18;
    ll y1=x,y2=r;
    ll current=1LL;
    string cc;
    ll mid=(x+r)/2;
    while(x<=r)
    {
        mid=(x+r)/2;

        if(current=1LL)
        cout<<current<<" "<<mid<<" "<<y1<<endl;
        else
        cout<<current<<" "<<mid<<" "<<y1<<" "<<mid<<" "<<y2<<endl;


        cin>>cc;
        if(cc[0]=='X')
            current=2LL;
        if(cc=="O")break;

        if(cc[0]=='N')x=    mid+1LL;
        if(cc[0]=='P')r=mid-1LL;
    }

}


int main(){
fast_io();
int t;

cin>>t>>q>>d;
while(t--)
{

   myfunction();



}



return 0;
}
