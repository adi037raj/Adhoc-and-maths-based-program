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
typedef priority_queue <int > max_heap;
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
max_heap m;
int n;
cin>>n;
unordered_map<int ,int > mymap;
REP(i,n)
{
    int x;
    cin>>x;
    mymap[x]++;
    if(mymap[x]>=2)
        m.push(x);
}
if(m.size()<2)
    cout<<"-1"<<endl;
else
{
    int x=m.top();
    m.pop();
    int y=m.top();
    cout<<x*y<<endl;

}

mymap.clear();

}



return 0;
}
