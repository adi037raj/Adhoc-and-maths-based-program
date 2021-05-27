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



int main(){
fast_io();
int t;

cin>>t;
while(t--)
{

int n,q,m;
cin>>n>>q>>m;
int a[n];
REP(i,n)cin>>a[i];
vi b_array(2000001,0);
map<pi,int> mymap;

while(q--)
{
    int l,r;
    cin>>l>>r;
    int cl=l-1,cr=r-1;
    if(a[cl]>m)
    {

    }
    else if(a[cl]<=m && a[cr]>m)
    {
        b_array[a[cl]]+=1;
        b_array[m+1]--;
    }
    else if(a[cr]<=m)
    {
        b_array[a[cl]]++,b_array[m+1]--;
        mymap[{a[cl],a[cr]}]++;
    }

}

for(auto z: mymap)
{
    int i=z.first.first,j=z.first.second,l=z.second;




    b_array[j+i]-=l;
    int c=j + 2 * i;
    b_array[c]+=l;
    while(c+j <= m)
    {
        c+=j;
        b_array[c]-=l;
        b_array[c+i]+=l;
        c+=i;
    }
}
//int ans=0;
for(int i=1;i<=m;i++)
    b_array[i]+=b_array[i-1];
int ans=0;
REP(i,m+1)
ans=max(ans,b_array[i]);


cout<<ans<<endl;







}



return 0;
}
