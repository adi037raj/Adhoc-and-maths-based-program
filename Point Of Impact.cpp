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
int n,k,x,y;
cin>>n>>k>>x>>y;
if(x==y)
{
    cout<<n<<" "<<n;
}
else if(x>y)
{
    array<pair<int,int>,4> points;
    points[0]=(MP(x-y,0));
    points[1]=(MP(n,n+y-x));
    points[2]=(MP(n+y-x,n));
    points[3]=(MP(0,x-y));

    cout<< points[k%4].first <<" "<< points[k%4].second;

}
else // y>x
{
array<pair<int,int>,4> points;
    points[0]=(MP(0,y-x));
    points[1]=(MP(n-y+x,n));
    points[2]=(MP(n,x+n-y));
    points[3]=(MP(-x+y,0));
cout<< points[k%4].first <<" "<< points[k%4].second;
}

cout<<endl;
}



return 0;
}
