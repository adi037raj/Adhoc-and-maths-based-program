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
int a,b,k;cin>>a>>b>>k;
vi x(a+b,0),y(a+b,0);
x[0]=y[0]=1;
b--;
if(k>a+b)
    cout<<"No\n";
    else
    {
    if(b==0&&k!=0)
    {

          cout<<"No\n";return 0;}


        for(int i=1;i<b+1;i++)
            x[i]=1;

        int times=0;
        for(int i=k+1;times<b;i++)
            y[i]=1,times++;



            cout<<"Yes\n";

        for(auto i:x)cout<<i;
        cout<<endl;
        for(auto i:y)cout<<i;
        cout<<endl;


    }


return 0;
}
